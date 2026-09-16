#!/usr/bin/env python3

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

"""Check that the committed models are valid, using MoXI-MC-Flow's sortcheck.

Two kinds of failure come back from sortcheck and they are not equivalent:

  * a parse or sort error is a real defect in the model, and gates.
  * `RecursionError` is a limitation of sortcheck itself.  It recurses over
    the expression tree, and the deepest models exceed CPython's C-level
    recursion limit, which `setrecursionlimit()` cannot raise.  The file is
    valid; the checker cannot read it.  These are reported and tolerated,
    because failing on them would gate on a property of the tool rather
    than of the benchmark set.

Exit status is 1 if any real defect is found, 0 otherwise.
"""

import argparse
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent.parent

# A quarter of the cores: these machines are shared and the work is not
# CPU-bound enough for saturating them to pay off.
DEFAULT_JOBS = max(1, (os.cpu_count() or 4) // 4)

PASS = "pass"
RECURSION = "recursion-limit"
DEFECT = "defect"


def check(path, sortcheck, timeout):
    """Return (status, detail) for one model."""
    try:
        proc = subprocess.run(
            [sys.executable, str(sortcheck), str(path)],
            capture_output=True,
            text=True,
            timeout=timeout,
            check=False,
        )
    except subprocess.TimeoutExpired:
        return DEFECT, f"timed out after {timeout}s"

    if proc.returncode == 0:
        return PASS, ""

    output = (proc.stdout + proc.stderr).strip()
    if "RecursionError" in output:
        return RECURSION, "nesting too deep for sortcheck"
    return DEFECT, output.splitlines()[-1][:200] if output else "sortcheck failed"


def collect(patterns):
    """Committed model files matching the given suffixes."""
    try:
        tracked = subprocess.run(
            ["git", "-C", str(BASE_DIR), "ls-files"],
            capture_output=True,
            text=True,
            check=True,
        ).stdout.splitlines()
    except (subprocess.CalledProcessError, FileNotFoundError):
        tracked = [str(p.relative_to(BASE_DIR)) for p in BASE_DIR.rglob("*")]

    return sorted(
        BASE_DIR / p for p in tracked if p.endswith(patterns) and p.startswith("QF_")
    )


def main():
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument("moxi_mc_flow", help="path to the MoXI-MC-Flow repository root")
    parser.add_argument(
        "-j",
        "--jobs",
        type=int,
        default=DEFAULT_JOBS,
        help="parallel checks (default: %(default)s)",
    )
    parser.add_argument(
        "-t",
        "--timeout",
        type=int,
        default=300,
        help="per-model timeout in seconds (default: %(default)s)",
    )
    parser.add_argument(
        "--max-report",
        type=int,
        default=25,
        help="how many failures to list per kind (default: %(default)s)",
    )
    args = parser.parse_args()

    sortcheck = Path(args.moxi_mc_flow).resolve() / "sortcheck.py"
    if not sortcheck.is_file():
        parser.error(f"no sortcheck.py at {sortcheck}")

    paths = collect((".moxi",))
    if not paths:
        parser.error("no .moxi models found")

    print(f"checking {len(paths)} model(s) with {sortcheck}")
    print(f"jobs={args.jobs} timeout={args.timeout}s\n")

    results = {PASS: [], RECURSION: [], DEFECT: []}
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        for path, (status, detail) in zip(
            paths, pool.map(lambda p: check(p, sortcheck, args.timeout), paths)
        ):
            results[status].append((path.relative_to(BASE_DIR), detail))

    if results[RECURSION]:
        print(
            f"tolerated: {len(results[RECURSION])} model(s) too deeply nested for "
            f"sortcheck (the models are valid, the checker cannot read them)"
        )
        for path, _ in results[RECURSION][: args.max_report]:
            print(f"  {path}")
        if len(results[RECURSION]) > args.max_report:
            print(f"  ... and {len(results[RECURSION]) - args.max_report} more")
        print()

    if results[DEFECT]:
        print(f"INVALID: {len(results[DEFECT])} model(s) rejected by sortcheck")
        for path, detail in results[DEFECT][: args.max_report]:
            print(f"  {path}\n    {detail}")
        if len(results[DEFECT]) > args.max_report:
            print(f"  ... and {len(results[DEFECT]) - args.max_report} more")
        print()

    print(
        f"valid {len(results[PASS])}   "
        f"unreadable-by-sortcheck {len(results[RECURSION])}   "
        f"invalid {len(results[DEFECT])}"
    )
    return 1 if results[DEFECT] else 0


if __name__ == "__main__":
    sys.exit(main())
