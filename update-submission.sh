#!/usr/bin/bash

copy_c_file() {
  if [[ ! -f $2 ]]; then
    echo "[ERROR] Cannot find file $2 ..."
    exit 1
  fi
  # get header
  line_num=$(awk '! NF { print NR; exit }' $2)
  head -n $line_num $2 >$2.tmp
  cat $2.tmp $1 >$2
  rm $2.tmp
}

copy_c_files() {
  if [[ ! -d $1 ]]; then
    echo "[ERROR] Cannot find folder $1 ..."
    exit 1
  fi
  for c_file in $1/*.c; do
    copy_c_file $c_file $2.$(basename $c_file)
  done
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

btor2c_opts=("lazyMod" "eagerMod")

# Copying bit-vector tasks
bv_folders=("beem"
  "btor2tools-examples"
  "goel-crafted"
  "goel-industry"
  "goel-opensource"
  "mann-2019"
  "mann-data-integrity")

for folder in ${bv_folders[@]}; do
  for opt in ${btor2c_opts[@]}; do
    copy_c_files "${word_level_path}/bv/c-${opt}/${folder}" "${bv_path}/btor2c-${opt}"
  done
done

# Copying array tasks
array_folders=("mann-2019")
for folder in ${array_folders[@]}; do
  for opt in ${btor2c_opts[@]}; do
    copy_c_files "${word_level_path}/array/c-${opt}/${folder}" "${array_path}/btor2c-${opt}"
  done
done
