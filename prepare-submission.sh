#!/usr/bin/bash

parallel_jobs=128

parallel_add_svcomp_header() {
  find $1 -name "$2" | \
    parallel -q -j "${parallel_jobs}" \
    reuse addheader \
    --template header.jinja2 \
    --merge-copyrights \
    --year "$3" \
    --copyright "$4" \
    {}
}

copy_c_yml_files() {
  if [ -d "$1/$2" ]; then
    echo "[INFO] Copying *.c and *.yml files from $1/$2 to $3 ..."
    cp "$1/$2"/*.c $3
    cp "$1/$2"/*.yml $3
  else
    echo "[ERROR] Cannot find folder $1/$2 ..."
    exit 1
  fi
}

# Parsing input arguments
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <path to word-level benchmark folder> <path to SV-COMP C folder>"
    exit 1
fi
word_level_path="${1%/}"
submission_path="${2%/}"
bv_path="${submission_path}/hardware-verification-bv"
array_path="${submission_path}/hardware-verification-array"
echo "[INFO] Word-level path: ${word_level_path}"
echo "[INFO] Submission path for bv: ${bv_path}"
echo "[INFO] Submission path for array: ${array_path}"

# Removing existing C and YAML files
for path in "${bv_path}" "${array_path}"; do
  if [ -d "${path}" ]; then
    echo "[INFO] Removing original *.c and *.yml files in ${path} ..."
    rm "${path}"/*.c "${path}"/*.yml
  else
    echo "[INFO] Creating folder ${path} for submission ..."
    mkdir -p "${path}"
  fi
done

# Copying bit-vector tasks
bv_folders=("bv/c/beem"
            "bv/c/btor2tools-examples"
            "bv/c/goel-crafted"
            "bv/c/goel-industry"
            "bv/c/goel-opensource"
            "bv/c/mann-2019"
            "bv/c/mann-data-integrity"
            "from-sv/c/v2smv")
for folder in ${bv_folders[@]}; do
  copy_c_yml_files "${word_level_path}" "${folder}" "${bv_path}"
done

# Copying array tasks
array_folders=("array/c/mann-2019")
for folder in ${array_folders[@]}; do
  copy_c_yml_files "${word_level_path}" "${folder}" "${array_path}"
done

# Editing path to property files
echo "[INFO] Editing paths to property files in YAML files ..."
find ${bv_path} -name '*.yml' -exec sed -i 's/\.\./\.\.\/properties/g' {} \;
find ${array_path} -name '*.yml' -exec sed -i 's/\.\./\.\.\/properties/g' {} \;

# Adding SV-COMP header
echo "[INFO] Adding SV-COMP header ..."
year="2022"
copyright="The SV-Benchmarks Community"
parallel_add_svcomp_header ${bv_path} "*.c" "$year" "$copyright"
parallel_add_svcomp_header ${bv_path} "*.yml" "$year" "$copyright"
parallel_add_svcomp_header ${array_path} "*.c" "$year" "$copyright"
parallel_add_svcomp_header ${array_path} "*.yml" "$year" "$copyright"
