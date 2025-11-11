#!/bin/bash

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2019-2025 Dirk Beyer
#
# SPDX-License-Identifier: Apache-2.0

# This script returns the task definition files for a given coverage property.
# Requires `yq` to be installed (https://pypi.org/project/yq/). Tested with version 2.10.
# Usage: ./get_tasks_for_property <PROPERTY_FILE> [BENCHMARK_DIRECTORY]
# Execute from directory `sv-benchmarks/c` or provide directory as a second command-line argument.
# From the returned task definitions, it is possible to get the input files with the following
# command line:
# yq --raw-output ".input_files" TASK_DEFINITION

set -euo pipefail
IFS=$'\n\t'

property=${1:-}
directory=${2:-./}

if [ -z "$property" ]; then
  echo "Usage: $0 <PROPERTY_NAME> [BENCHMARK_DIRECTORY]"
  exit 1
fi

find "$directory" -name "*.yml" \
	| xargs --max-proc=$(nproc) --replace={} "$(dirname "$0")"/match_task_for_property.sh "$property" {}
