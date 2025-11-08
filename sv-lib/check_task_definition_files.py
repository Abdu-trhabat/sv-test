#!/usr/bin/env python3

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2011-2020 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

import sys
import yaml
from pathlib import Path
from collections import defaultdict
import argparse

# Global error collection
errors = []


def log_error(message: str):
    """Record and print an error message."""
    errors.append(message)
    print(f"❌ {message}")


def check_yaml_file(yaml_path: Path) -> bool:
    """
    Validate a single YAML file:
      - Syntax correctness
      - Presence of required fields
      - Existence of referenced files
    """
    try:
        data = yaml.safe_load(yaml_path.read_text())
    except yaml.YAMLError as e:
        log_error(f"Error parsing {yaml_path}: {e}")
        return False

    yaml_dir = yaml_path.parent
    all_ok = True

    # Validate input_files
    input_files = data.get("input_files", [])
    if not input_files:
        log_error(f"{yaml_path}: Missing or empty 'input_files' field.")
        all_ok = False
    else:
        for rel_path in input_files:
            full_path = yaml_dir / rel_path
            if not full_path.exists():
                log_error(f"{yaml_path}: Missing input file '{rel_path}' → {full_path}")
                all_ok = False

    # Validate properties
    properties = data.get("properties", [])
    if not properties:
        log_error(f"{yaml_path}: Missing or empty 'properties' field.")
        all_ok = False
    else:
        for prop in properties:
            prop_file = prop.get("property_file")
            if not prop_file:
                log_error(
                    f"{yaml_path}: 'property_file' missing in one of the properties."
                )
                all_ok = False
                continue

            full_path = yaml_dir / prop_file
            if not full_path.exists():
                log_error(
                    f"{yaml_path}: Missing property file '{prop_file}' → {full_path}"
                )
                all_ok = False

    if all_ok:
        print(f"✅ {yaml_path} passed all checks.")
    return all_ok


def find_yaml_files(root_dir: Path):
    """Return a list of all YAML file paths under the given directory."""
    return list(root_dir.rglob("*.yml")) + list(root_dir.rglob("*.yaml"))


def check_unique_filenames(yaml_files):
    """
    Ensure all YAML filenames (basename only) are unique.
    """
    name_map = defaultdict(list)
    for path in yaml_files:
        name_map[path.name].append(path)

    duplicates = {n: p for n, p in name_map.items() if len(p) > 1}
    if duplicates:
        print("\n⚠️  Duplicate YAML filenames detected:")
        for name, paths in duplicates.items():
            log_error(f"Duplicate filename '{name}' used in:")
            for p in paths:
                print(f"   → {p}")
        return False
    return True


def parse_args():
    parser = argparse.ArgumentParser(
        description="Validate YAML test configuration files."
    )
    parser.add_argument(
        "directory", type=Path, help="Root directory containing YAML files to validate."
    )
    return parser.parse_args()


def main():
    args = parse_args()
    root_dir: Path = args.directory

    if not root_dir.is_dir():
        log_error(f"{root_dir} is not a directory.")
        sys.exit(1)

    yaml_files = find_yaml_files(root_dir)
    if not yaml_files:
        print("No YAML files found.")
        sys.exit(0)

    print(f"🔍 Checking {len(yaml_files)} YAML files under {root_dir}...\n")

    # --- Check filename uniqueness ---
    check_unique_filenames(yaml_files)

    # --- Check each YAML file ---
    all_ok = True
    for yaml_path in yaml_files:
        ok = check_yaml_file(yaml_path)
        all_ok = all_ok and ok

    # --- Summary ---
    print("\n=== SUMMARY ===")
    print(f"Total YAML files checked: {len(yaml_files)}")
    print(f"Total errors: {len(errors)}")

    if errors:
        print("\n⚠️  Issues found:")
        for e in errors:
            print(f" - {e}")
        sys.exit(2)
    else:
        print("\n✅ All YAML files passed validation.")
        sys.exit(0)


if __name__ == "__main__":
    main()
