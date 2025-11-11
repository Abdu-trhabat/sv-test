#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2019-2025 Dirk Beyer
#
# SPDX-License-Identifier: Apache-2.0

# This script returns the task-definition files for a given property file.
# Requires `yq` to be installed (https://pypi.org/project/yq/). Tested with version 2.10.
# Usage: ./get_tasks_for_set <PROPERTY_FILE> <SET_FILE>
# From the returned task definitions, it is possible to get the input files with the following
# command line:
# yq --raw-output ".input_files" TASK_DEFINITION

set -euo pipefail

property_file=${1:-}
set_file=${2:-}

if [ -z "$property_file" -o -z "$set_file" ]; then
  echo "Usage: $0 <PROPERTY_FILE> <SET_FILE>"
  exit 1
fi

for pattern in $(cat $set_file | grep -v \# | grep -v "^$"); do
  for task in "$(dirname $set_file)"/$pattern; do
    echo "$task"
  done
done \
  | xargs --max-proc=$(nproc) --replace={} "$(dirname "$0")"/match_task_for_property.sh "$property_file" {}

# Application example: Calculate the number of tasks per set file:

# for set in c/*.set; do
#   echo -en "$set\t";
#   ./get_tasks_for_set.sh c/properties/termination.prp $set | wc -l;
# done
