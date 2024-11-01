#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2024 Dirk Beyer <dirk.beyer@sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0

# Check if the correct number of arguments are provided
if [ $# -ne 2 ]; then
  echo "Usage: $0 </path/to/folder> <suffix>"
  exit 1
fi

folder="$1"
suffix="$2"

# Loop over all .c files in the folder
for cfile in "$folder"/*.c; do
  # Check if any .c files exist
  if [ ! -e "$cfile" ]; then
    echo "No .c files found in the specified folder."
    exit 1
  fi

  # Get the base name without extension
  base=$(basename "$cfile" .c)

  # Define the corresponding .i and .yml files
  ifile="$folder/$base.i"
  ymlfile="$folder/$base.yml"

  # Check if the corresponding .i and .yml files exist
  if [ -f "$ifile" ] && [ -f "$ymlfile" ]; then
    # Rename the files with the specified suffix
    mv "$cfile" "$folder/${base}_${suffix}.c"
    mv "$ifile" "$folder/${base}_${suffix}.i"
    mv "$ymlfile" "$folder/${base}_${suffix}.yml"

    # Update the input_files line in the YAML file
    new_ymlfile="$folder/${base}_${suffix}.yml"
    sed -i "s|input_files: $base\.i|input_files: ${base}_${suffix}.i|g" "$new_ymlfile"
  else
    echo "Warning: Missing .i or .yml file for $base, skipping."
  fi
done
