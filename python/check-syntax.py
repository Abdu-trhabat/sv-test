#!/usr/bin/python3

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

import glob
import os
import subprocess
import sys
import yaml
from pathlib import Path

CMDLINE = ["python3", "-m", "py_compile"]

if len(sys.argv) > 2:
    sys.exit("Unexpected command-line arguments! Only optional directory expected.")

if len(sys.argv) > 1:
    base_dir = sys.argv[1]
    if not os.path.isdir(base_dir):
        sys.exit(f"Parameter '{base_dir}' is not a directory.")
else:
    base_dir = "."

ERRORS = 0

# custom environment for the _sv_verfier module
env = os.environ.copy()
script_dir = Path(__file__).resolve().parent
env["PYTHONPATH"] = os.pathsep.join(
    filter(None, [
        str(script_dir),
        env.get("PYTHONPATH"),
    ])
)

for task_file in glob.iglob(os.path.join(base_dir, "**/*.yml"), recursive=True):
    with open(task_file) as f:
        task_def = yaml.safe_load(f)

    task_dir = glob.escape(os.path.dirname(task_file))
    python_files = [
        python_file
        for input_path in task_def["input_files"]
        for python_file in glob.glob(
            os.path.join(task_dir, glob.escape(input_path), "**/*.py"), recursive=True
        )
    ]

    print("Checking syntactic validity of ", len(python_files), "Python files from", task_file)
    python = subprocess.run(CMDLINE + python_files, env=env)
    if python.returncode:
        ERRORS += 1
        print("==> ERROR! Compilation failed!\n")

print()

if ERRORS:
    sys.exit(f"{ERRORS} compilation error(s), check output above!")
else:
    print("Everything compiles!")
