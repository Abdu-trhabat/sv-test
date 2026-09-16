#!/usr/bin/env python3

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

"""Check that every model file is accompanied by exactly one task-definition.

The rule enforced here is a bijection: for every model file

    moxi/<category>/<set>/<name>.moxi

there must be exactly one sibling <name>.yml, and that .yml must be a
BenchExec task-definition naming that model in input_files.  Both
directions are checked -- a model without a task-def is as much a fault as
a task-def without a model, since BenchExec silently skips neither.

The .yml sits next to the model it describes rather than in a directory of
its own because input_files is resolved relative to the task-definition,
and every committed task-def already relies on that.
"""

import argparse
import sys
from pathlib import Path

try:
    import yaml
except ImportError:
    sys.exit("check_task_defs.py: PyYAML is required (pip install pyyaml)")

BASE_DIR = Path(__file__).resolve().parent.parent

CATEGORIES = ["QF_BV", "QF_ABV", "QF_LIA"]

EXPECTED_FORMAT_VERSION = "2.0"

# Long failure lists are noise; the count is the signal.
PRINT_EXAMPLES_MAX = 10


def model_files(category):
    """Model files of one category, sorted."""
    return sorted((BASE_DIR / category).glob("*/*.moxi"))


def task_def_files(category):
    """Task-definitions sitting alongside the models of one category."""
    return sorted((BASE_DIR / category).glob("*/*.yml"))


def check_task_def(path, model):
    """Validate one task-definition against the model it should describe.

    Returns a list of human-readable problems; empty means the file is good.
    """
    problems = []

    try:
        with open(path) as f:
            task = yaml.safe_load(f)
    except (OSError, yaml.YAMLError) as e:
        return [f"unreadable: {e}"]

    if not isinstance(task, dict):
        return ["not a YAML mapping"]

    version = str(task.get("format_version", ""))
    if version != EXPECTED_FORMAT_VERSION:
        problems.append(f"format_version is {version!r}, expected '2.0'")

    # input_files is a string or a list of them; both are valid BenchExec.
    inputs = task.get("input_files")
    if inputs is None:
        problems.append("no input_files")
    else:
        if isinstance(inputs, str):
            inputs = [inputs]
        if [str(i) for i in inputs] != [model.name]:
            problems.append(f"input_files is {inputs}, expected ['{model.name}']")

    properties = task.get("properties")
    if not properties:
        problems.append("no properties")
    else:
        for prop in properties:
            if not isinstance(prop, dict):
                problems.append(f"malformed property entry {prop!r}")
                continue
            prop_file = prop.get("property_file")
            if prop_file is None:
                problems.append("property entry without property_file")
            elif not (path.parent / prop_file).exists():
                problems.append(f"property_file does not resolve: {prop_file}")
            if not isinstance(prop.get("expected_verdict"), bool):
                verdict = prop.get("expected_verdict")
                problems.append(f"expected_verdict is {verdict!r}, expected a bool")

    return problems


def check(category):
    """Check one category.  Returns (missing, orphaned, invalid)."""
    models = model_files(category)
    task_defs = task_def_files(category)

    described = {}
    for path in task_defs:
        described.setdefault(path.with_suffix(""), []).append(path)

    stems = {m.with_suffix("") for m in models}
    missing = [m for m in models if m.with_suffix("") not in described]
    orphaned = [
        path
        for stem, paths in sorted(described.items())
        for path in paths
        if stem not in stems
    ]

    invalid = []
    for model in models:
        for path in described.get(model.with_suffix(""), []):
            problems = check_task_def(path, model)
            if problems:
                invalid.append((path, problems))

    return missing, orphaned, invalid


def report(label, paths, message):
    if not paths:
        return
    print(f"  {len(paths)} {message}")
    for path in paths[:PRINT_EXAMPLES_MAX]:
        print(f"    {path.relative_to(BASE_DIR)}")
    if len(paths) > PRINT_EXAMPLES_MAX:
        print(f"    ... and {len(paths) - PRINT_EXAMPLES_MAX} more")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "-c",
        "--category",
        action="append",
        choices=CATEGORIES,
        help="restrict to one category (repeatable; default: all)",
    )
    args = parser.parse_args()

    categories = args.category or CATEGORIES

    failures = 0
    for category in categories:
        models = model_files(category)
        missing, orphaned, invalid = check(category)
        good = len(models) - len(missing) - len(invalid)

        print(f"{category}: {len(models)} models, {good} with a valid task-def")
        report(category, missing, "without a task-def")
        report(category, orphaned, "task-defs without a model")
        if invalid:
            print(f"  {len(invalid)} invalid task-defs")
            for path, problems in invalid[:PRINT_EXAMPLES_MAX]:
                print(f"    {path.relative_to(BASE_DIR)}: {'; '.join(problems)}")
            if len(invalid) > PRINT_EXAMPLES_MAX:
                print(f"    ... and {len(invalid) - PRINT_EXAMPLES_MAX} more")

        failures += len(missing) + len(orphaned) + len(invalid)

    print()
    print("OK" if not failures else f"FAILED: {failures} problems")
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
