#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2019-2025 Dirk Beyer
#
# SPDX-License-Identifier: Apache-2.0

# This script prints the given task-definition file if the given property matches.
# Requires `yq` to be installed (https://pypi.org/project/yq/). Tested with version 2.10.
# Usage: ./match_task_for_property <PROPERTY_FILE> <TASK_FILE>

set -euo pipefail
IFS=$'\n\t'

property=${1:-}
task=${2:-}

if [ -z "$property" -o -z "$task" ]; then
  echo "Usage: $0 <PROPERTY_FILE> <TASK_FILE>"
  exit 1
fi

for prp in $(yq --raw-output "select(.properties? != null) | .properties[].property_file" "$task" ); do
  if [ $property -ef "$(dirname "$task")/$prp" ]; then
    echo "$task"
    break
  fi
done
