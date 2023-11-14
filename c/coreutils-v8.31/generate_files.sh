#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
# 
# SPDX-FileCopyrightText: 2023 Inria
# SPDX-FileContributor: Raphaël Monat 
# 
# SPDX-License-Identifier: GPL-3.0-or-later

# This bash script can be used to generate the preprocessed files from Coreutils.
# It requires Mopsa, here used with commit f472fc86f932231c252db3a3c88e66d5b93c3360

get_coreutils() {
    git clone https://github.com/coreutils/coreutils.git -b v8.31 --depth 1
}

get_kleesa() {
    wget https://srg.doc.ic.ac.uk/files/vms/kleesa_artefact.tgz
	  docker load --input kleesa_artefact.tgz
}

import_kleesa_files() {
    docker run -it --volume=$(realpath .):/bla klee-sa/artefact /bin/bash -c "cp /bla/find_instrumented_files_in_artifact.sh . && bash find_instrumented_files_in_artifact.sh && rm results/*.csv && mv results /bla/klee-sa-faults"
}

build_coreutils() {
	  cd coreutils && \
	      ./bootstrap && \
	      ./configure --disable-nls --without-gmp --disable-threads --disable-acl --disable-libsmack --disable-xattr --disable-libcap --without-selinux CFLAGS="-DFORTIFY_SOURCE=0 -D__ICC" && \
	      MOPSADB=$(realpath .) mopsa-build make &&\
        cd ..
}

preprocess_kleesa_file() {
    file=$1
    coreutil=$(python3 -c 'import sys; s = sys.argv[1]; print(s.split("_")[0])' $(basename $file))
    kleesa_file_args=$(python3 -c 'import sys; s = sys.argv[1]; print("_".join(s.split("_")[1:]))' $(basename $file .c))
    extension="_3args_klee-sa_ko_${kleesa_file_args}"
    genname="${coreutil}${extension}.c"
    cp $file coreutils/src/${coreutil}.c
    preprocess_file ${coreutil}.c $genname
    echo "$(cat license_kleesa_files.c $genname)" > $genname
    basename=$(basename $genname .c)
    echo "
format_version: '2.0'
input_files: \"${genname}\"

properties:
  - property_file: ../properties/valid-memsafety.prp
    expected_verdict: false
    subproperty: valid-deref

options:
  language: C
  data_model: LP64
" > ${basename}.yml
}


preprocess_ok_file() {
    file=$1
    genname="$(basename $file .c)_3args_ok.c"
    preprocess_file $file $genname
    echo "$(cat license.c $genname)" > $genname
    basename=$(basename $genname .c)
    echo "
format_version: '2.0'
input_files: \"${genname}\"

properties:
  - property_file: ../properties/valid-memsafety.prp
    expected_verdict: true
  - property_file: ../properties/no-overflow.prp
    expected_verdict: true

options:
  language: C
  data_model: LP64
" > ${basename}.yml
}

inject_argv() {
    # injects arginit.c client at the beginning of main
    file=$1
    sed -i -e "s/main (int argc, char \*\*argv)/__main (int argc, char \*\*argv)/g" src/$file
    cat ../arginit.c >> src/$file
    sed -z 's/main (int argc, char \*\*argv)\n{/main (int argc, char **argv) {/' -i src/$file
    sed -e '/^main (int argc, char \*\*argv) {/ {' -e 'r ../arginit.c' -e 'd' -e '}' -i src/$file
}

preprocess_file() {
    cd coreutils 
    file=$1
    generated_name=$2
    inject_argv $file
    # calls mopsa in interactive mode and EOF, just to make it parse and preprocess the C file
    cat /dev/null | mopsa-c mopsa.db -engine=interactive -without-libc -c-save-preprocessed-file=${generated_name} -make-target=$(basename $file .c)
    sed -i  -e "/typedef long double _Float64x/d" -e "/typedef float _Float32;/d" -e "/typedef double _Float64;/d" $generated_name 
    sed -i  -e "s/_Float64x/long double/g" -e "s/_Float32/float/g" -e "s/_Float64/double/g" $generated_name
    mv $generated_name ../
    git checkout src/$file
    cd ..
}

main() {
    if [ ! -d "coreutils" ]; then 
       echo "Fetching coreutils..."
       get_coreutils
    fi
    
    if [[ "$(docker images -q klee-sa/artefact:latest 2> /dev/null)" == "" ]]; then
       echo "Fetching docker image for kleesa"
       get_kleesa
    fi

    if [[ "$(ls -1 klee-sa-faults/*.c | wc -l)" != "110" ]]; then
        echo "Fetching instrumented coreutils files from kleesa"
        import_kleesa_files
    fi

    if [ ! -f "coreutils/configure" ]; then 
        echo "Building mopsa.db from coreutils"
        build_coreutils
    fi

    if [[ $(grep quotearg_buffer_restyled coreutils/lib/quotearg.c | wc -l) -eq 8 ]]; then
        echo "Replacing quotearg_buffer_restyled with simplified implementation";
        cd coreutils
        cp lib/quotearg.c lib/quotearg.c.bak
        head -n 254 lib/quotearg.c.bak > lib/quotearg.c && cat ../quotearg.c >> lib/quotearg.c && tail -n+773 lib/quotearg.c.bak >> lib/quotearg.c
        sed -e "424i extern char __VERIFIER_nondet_char();" -i lib/quotearg.h
        sed -e "424i extern size_t __VERIFIER_nondet_size_t();" -i lib/quotearg.h
        # rm lib/quotearg.c.bak
        cd ..
    fi

    if [ ! -f "license.c" ]; then
        touch license.c
        reuse addheader --template header.jinja2 --year "1985-2019" --copyright "Free Software Foundation, Inc." --license GPL-3.0-or-later license.c
        cp license.c license_kleesa_files.c
        reuse addheader --template header.jinja2 --year "2019-2022" --copyright "Frank Busse, Pritam Gharat, Cristian Cadar, Alastair Donaldson, Imperial College London" --license GPL-3.0-or-later license_kleesa_files.c
        reuse addheader --template header.jinja2 --year "2023" --copyright "Raphaël Monat, Inria" --license GPL-3.0-or-later license_kleesa_files.c
        reuse addheader --template header.jinja2 --year "2023" --copyright "Raphaël Monat, Inria" --license GPL-3.0-or-later license.c
        echo "
// Coreutils instrumentation performed by:
// Frank Busse, Pritam Gharat, Cristian Cadar, Alastair Donaldson, from their work
// \"Combining Static Analysis Error Traces with Dynamic Symbolic Execution (Experience Paper)\", ISSTA 2022,
// Data extracted from artefact, cf https://srg.doc.ic.ac.uk/projects/klee-sa/artifact.html
" >> license_kleesa_files.c
    fi

    echo "Preprocessing instrumented coreutils files from kleesa"
    for f in $(ls klee-sa-faults/*.c); do
        preprocess_kleesa_file $f
    done

    echo "Preprocessing vanilla coreutils files"
    for t in comm csplit cut env join ln nl od split uniq; do
        preprocess_ok_file "${t}.c"
    done

    sed -e '/typedef char \*__builtin_ms_va_list;/d' -i *ok.c *ko*.c
}

if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    main "$@"
fi
