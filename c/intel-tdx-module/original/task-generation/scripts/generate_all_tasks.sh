#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2024 Dirk Beyer <dirk.beyer@sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0

# Check if at least three arguments are provided
if [ "$#" -lt 3 ]; then
    echo "Usage: $0 <HarnessForge_path> <config_path> <parallel_jobs> [additional_HarnessForge_args]"
    exit 1
fi

# Assign arguments to variables
generation_script="$1"
config_path="$2"
parallel_jobs="$3"

# Shift the positional parameters so that $@ contains any additional arguments
shift 3

# The remaining arguments are additional parameters for the generation script
additional_generation_script_args=("$@")

# Verify that the generation script exists and is executable
if [ ! -x "$generation_script" ]; then
    echo "Error: Generation script '$generation_script' does not exist or is not executable."
    exit 1
fi

# Verify that the config path exists
if [ ! -e "$config_path" ]; then
    echo "Error: Config path '$config_path' does not exist."
    exit 1
fi

# Verify that parallel_jobs is a positive integer
if ! [[ "$parallel_jobs" =~ ^[0-9]+$ ]] || [ "$parallel_jobs" -le 0 ]; then
    echo "Error: Number of parallel jobs '$parallel_jobs' is not a positive integer."
    exit 1
fi

# Initialize an array to hold YAML files
yaml_files=()

if [ -d "$config_path" ]; then
    # If config_path is a directory, find all YAML files in the folder
    while IFS= read -r -d '' file; do
        yaml_files+=("$file")
    done < <(find "$config_path" -maxdepth 1 -type f \( -iname "*.yaml" -o -iname "*.yml" \) -print0)
elif [ -f "$config_path" ]; then
    # If config_path is a file, check if it's a YAML file
    if [[ "$config_path" =~ \.(yaml|yml)$ ]]; then
        yaml_files+=("$config_path")
    else
        echo "Error: File '$config_path' is not a YAML file."
        exit 1
    fi
else
    echo "Error: '$config_path' is neither a directory nor a file."
    exit 1
fi

# Check if any YAML files were found
if [ "${#yaml_files[@]}" -eq 0 ]; then
    echo "No YAML files found in '$config_path'."
    exit 1
fi

# Hard-coded additional arguments for the generation script
hard_coded_args=(
    --src-dir src/
    --src-dir include/auto_gen/
    --src-dir formal/src/
    --override-dir formal/tdx_override/
    -D "FAULT_SAFE_MAGIC_INDICATOR=0xFF0F0F0F0F0F0FFF"
    -D "TDX_MODULE_BUILD_DATE=20240801"
    -D "TDX_MODULE_BUILD_NUM=0"
    -D "TDX_MINOR_SEAM_SVN=0"
    -D "TDX_MODULE_MAJOR_VER=1"
    -D "TDX_MODULE_MINOR_VER=5"
    -D "TDX_MODULE_UPDATE_VER=5"
    -D "TDX_MODULE_INTERNAL_VER=0"
    -D "TDX_MODULE_HV=0"
    -D "TDX_MIN_UPDATE_HV=0"
    -D "TDX_NO_DOWNGRADE=0"
    -D "_NO_IPP_DEPRECATED"
    -D "TDXFV_NO_ASM"
    -I "include/"
    -I "src/"
    -I "src/common"
    -I "src/common/helpers"
    -I "src/common/metadata_handlers"
    -I "src/td_dispatcher"
    -I "src/td_transitions"
    -I "src/vmm_dispatcher"
    -I "libs/ipp/ipp-crypto-ippcp_2021.7.1/include"
    -I "formal/include"
)

# Create a temporary file to store failed files
failed_files=$(mktemp)

# Export necessary variables for GNU Parallel
export generation_script
export failed_files

# Function to process each YAML file
process_yaml() {
    yaml_file="$1"
    shift
    echo "Processing \"$yaml_file\"..."
    if ! "$generation_script" create-task "$yaml_file" "$@"; then
        echo "Error processing \"$yaml_file\""
        echo "$yaml_file" >> "$failed_files"
    fi
}

export -f process_yaml

# Combine hard-coded args and additional args
all_args=("${hard_coded_args[@]}" "${additional_generation_script_args[@]}")

# Run the generation script on each YAML file in parallel using GNU Parallel
parallel --line-buffer -j "$parallel_jobs" \
    process_yaml "{}" "${all_args[@]}" ::: "${yaml_files[@]}"

# Check if any files failed
if [ -s "$failed_files" ]; then
    echo -e "\nThe following YAML files failed to process:"
    cat "$failed_files"
    rm "$failed_files"
    exit 1
else
    rm "$failed_files"
    echo -e "\nAll YAML files have been processed successfully."
    exit 0
fi
