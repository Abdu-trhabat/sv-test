#!/usr/bin/env python3

# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

"""Check that every .moxi task has the canonical shape required by the rules.

The SV-COMP MoXI track conventions (moxi/CONVENTIONS.md)
fix one task shape, and the property line `CHECK( check-system(main),
unsat-query )` presumes it.  Enforced here, per file:

  1. exactly one (set-logic ...);
  2. the declared logic matches the category directory the task lives
     in (a file under QF_LIA/ must declare QF_LIA);
  3. a system named main is defined;
  4. no system instantiates main (it is the top-level composition);
  5. every other defined system is a subsystem of main, transitively
     (no orphan systems);
  6. exactly one (check-system ...), and it checks main;
  7. the check-system has exactly one :query and no :queries;
  8. the task's category kind follows from the set files, which are the
     category authority: a task listed in a safety set file must not use
     :fairness conditions (finite-trace semantics), a task listed in a
     liveness set file must use at least one (infinite-trace semantics);
     every task is listed in some set file, and all set files listing it
     agree on its kind.  The kind of each set file is declared in
     SET_KINDS below; a set file without a declared kind is an error.

Deadlock-freedom is an expectation of the rules but deliberately NOT
checked -- verifying it amounts to model checking each task.

The checks are structural, not semantic: files are parsed as SMT-LIB
S-expressions (handling |quoted symbols|, "strings" with "" escapes, and
; comments), and attributes are counted only at the top nesting level of
the form they belong to, so keywords inside nested terms or strings
cannot be miscounted.  Rule 2 is a plain name comparison and needs no
knowledge of the logics themselves.  That a model's sorts and operators
actually fit its declared theory is sortcheck's job
(check_models_valid.py); fragment restrictions inside a theory (e.g.
linearity for QF_LIA) are checked by neither tool -- a known gap that no
current task exercises.
"""

import argparse
import re
import sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent.parent

# The kind of each category, keyed by set-file stem.  Set files are the
# category authority: extend this map when a set file is added (e.g., a
# future liveness category).
SET_KINDS = {
    "QF_ABV": "safety",
    "QF_BV": "safety",
    "QF_LIA": "safety",
}

# Long failure lists are noise; the count is the signal.
PRINT_EXAMPLES_MAX = 20

TOKEN = re.compile(
    r"""
      [ \t\r\n]+            # whitespace
    | ;[^\n]*               # line comment
    | (?P<lparen>\()
    | (?P<rparen>\))
    | (?P<quoted>\|[^|]*\|) # quoted symbol; may span lines, no | inside
    | (?P<string>"(?:[^"]|"")*")
    | (?P<atom>[^()\s;|"]+)
    """,
    re.VERBOSE,
)


class ParseError(Exception):
    pass


def parse(text):
    """Parse to a list of top-level forms.

    A form is a list; a symbol is ('sym', name) with |quotes| stripped;
    a string literal is ('str', value).
    """
    top = []
    stack = [top]
    pos = 0
    while pos < len(text):
        match = TOKEN.match(text, pos)
        if not match:
            raise ParseError(f"unexpected character {text[pos]!r} at offset {pos}")
        pos = match.end()
        if match.lastgroup is None:
            continue
        if match.lastgroup == "lparen":
            form = []
            stack[-1].append(form)
            stack.append(form)
        elif match.lastgroup == "rparen":
            if len(stack) == 1:
                raise ParseError(f"unbalanced ')' at offset {match.start()}")
            stack.pop()
        elif match.lastgroup == "quoted":
            stack[-1].append(("sym", match.group()[1:-1]))
        elif match.lastgroup == "string":
            stack[-1].append(("str", match.group()[1:-1].replace('""', '"')))
        else:
            stack[-1].append(("sym", match.group()))
    if len(stack) != 1:
        raise ParseError("unbalanced '(' at end of file")
    return top


def is_form(form, head):
    return isinstance(form, list) and len(form) > 0 and form[0] == ("sym", head)


def symbol(element):
    """The symbol name of an element, or None if it is not a symbol."""
    if isinstance(element, tuple) and element[0] == "sym":
        return element[1]
    return None


def count_attrs(form, keyword):
    """Occurrences of an attribute keyword at the form's top nesting level."""
    return sum(1 for element in form if symbol(element) == keyword)


def subsystem_names(define_system):
    """System names instantiated by a define-system's :subsys attributes.

    A :subsys value has the shape (<local-name> (<system-name> <io>...)).
    Returns (names, problems) so a malformed value is reported, not skipped.
    """
    names, problems = [], []
    for i, element in enumerate(define_system):
        if symbol(element) != ":subsys":
            continue
        value = define_system[i + 1] if i + 1 < len(define_system) else None
        name = None
        if (
            isinstance(value, list)
            and len(value) == 2
            and isinstance(value[1], list)
            and len(value[1]) >= 1
        ):
            name = symbol(value[1][0])
        if name is None:
            problems.append(f"malformed :subsys value: {value!r}")
        else:
            names.append(name)
    return names, problems


def expected_logic(path):
    """The logic a task must declare, from its category directory.

    None -- and rule 2 is skipped -- for files outside the benchmark
    tree, such as scratch files passed on the command line.
    """
    try:
        parts = path.resolve().relative_to(BASE_DIR).parts
    except ValueError:
        return None
    if len(parts) >= 1 and parts[0].startswith("QF_"):
        return parts[0]
    return None


def check_file(path, kind=None):
    """Return a list of human-readable problems; empty means canonical.

    kind is the task's category kind ('safety' or 'liveness') per the set
    files, or None to skip the kind-dependent rules (scratch files).
    """
    try:
        forms = parse(path.read_text())
    except (OSError, UnicodeDecodeError, ParseError) as e:
        return [f"parse error: {e}"]

    problems = []

    set_logics = [f for f in forms if is_form(f, "set-logic")]
    if len(set_logics) != 1:
        problems.append(f"{len(set_logics)} set-logic commands, expected exactly 1")
    else:
        category = expected_logic(path)
        declared = symbol(set_logics[0][1]) if len(set_logics[0]) > 1 else None
        if category is not None and declared != category:
            problems.append(f"declares {declared!r} but lives in {category}")

    defines = [f for f in forms if is_form(f, "define-system")]
    systems = {}  # name -> instantiated subsystem names
    for define in defines:
        name = symbol(define[1]) if len(define) > 1 else None
        if name is None:
            problems.append("define-system without a system name")
            continue
        if name in systems:
            problems.append(f"system {name!r} defined more than once")
        instantiated, sub_problems = subsystem_names(define)
        problems += sub_problems
        systems.setdefault(name, []).extend(instantiated)

    if "main" not in systems:
        problems.append("no system named main is defined")
    else:
        instantiators = sorted(name for name, subs in systems.items() if "main" in subs)
        if instantiators:
            problems.append(f"main is instantiated by: {', '.join(instantiators)}")

        reachable = set()
        queue = ["main"]
        while queue:
            name = queue.pop()
            if name in reachable:
                continue
            reachable.add(name)
            queue += systems.get(name, [])
        orphans = sorted(set(systems) - reachable)
        if orphans:
            problems.append(f"systems not reachable from main: {', '.join(orphans)}")

    checks = [f for f in forms if is_form(f, "check-system")]
    if len(checks) != 1:
        problems.append(f"{len(checks)} check-system commands, expected exactly 1")
    for check in checks:
        checked = symbol(check[1]) if len(check) > 1 else None
        if checked != "main":
            problems.append(f"check-system checks {checked!r}, expected 'main'")
        queries = count_attrs(check, ":query")
        if queries != 1:
            problems.append(f"{queries} :query attributes, expected exactly 1")
        found = count_attrs(check, ":queries")
        if found:
            problems.append(f"{found} :queries attributes, expected none")
        fairness = count_attrs(check, ":fairness")
        if kind == "safety" and fairness:
            problems.append(
                f"{fairness} :fairness attributes, but the task is in a safety set"
            )
        if kind == "liveness" and not fairness:
            problems.append("no :fairness attribute, but the task is in a liveness set")

    return problems


def set_file_kinds():
    """Map each task-definition path to its category kind, from the set files.

    Set files are the category authority.  Returns (kinds, problems):
    kinds maps a resolved task-definition Path to 'safety' or 'liveness';
    problems lists set-level violations.
    """
    kinds = {}
    problems = []
    for set_file in sorted(BASE_DIR.glob("*.set")):
        kind = SET_KINDS.get(set_file.stem)
        if kind is None:
            problems.append(
                f"{set_file.name}: set file without a declared kind "
                f"(extend SET_KINDS in {Path(__file__).name})"
            )
            continue
        for pattern in set_file.read_text().split():
            matched = sorted(BASE_DIR.glob(pattern))
            if not matched:
                problems.append(f"{set_file.name}: pattern {pattern!r} matches nothing")
            for task_def in matched:
                previous = kinds.setdefault(task_def, kind)
                if previous != kind:
                    problems.append(
                        f"{task_def.relative_to(BASE_DIR)}: listed in set files of "
                        f"conflicting kinds ({previous} and {kind})"
                    )
    return kinds, problems


def check_file_worker(item):
    path, kind = item
    return path, check_file(path, kind)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "files",
        nargs="*",
        type=Path,
        help="specific .moxi files to check (default: every task)",
    )
    parser.add_argument(
        "-j",
        "--jobs",
        type=int,
        default=None,
        help="parallel worker processes (default: one per CPU)",
    )
    args = parser.parse_args()

    files = args.files or sorted(BASE_DIR.glob("QF_*/**/*.moxi"))
    if not files:
        sys.exit("no .moxi files found")

    kinds, set_problems = set_file_kinds()
    if not args.files:
        for path in files:
            if path.resolve().with_suffix(".yml") not in kinds:
                set_problems.append(
                    f"{path.relative_to(BASE_DIR)}: not listed in any set file"
                )
    for problem in set_problems:
        print(problem)

    items = [(path, kinds.get(path.resolve().with_suffix(".yml"))) for path in files]

    violating = 0
    with ProcessPoolExecutor(max_workers=args.jobs) as pool:
        for path, problems in pool.map(check_file_worker, items, chunksize=8):
            if not problems:
                continue
            violating += 1
            try:
                shown = path.relative_to(BASE_DIR)
            except ValueError:
                shown = path
            if violating <= PRINT_EXAMPLES_MAX:
                print(f"{shown}:")
                for problem in problems:
                    print(f"  {problem}")
            elif violating == PRINT_EXAMPLES_MAX + 1:
                print("...")

    print()
    if violating or set_problems:
        print(
            f"FAILED: {violating} of {len(files)} tasks deviate from the canonical "
            f"shape, {len(set_problems)} set-level problems"
        )
    else:
        print(f"OK: {len(files)} tasks, all canonical")
    return 1 if violating or set_problems else 0


if __name__ == "__main__":
    sys.exit(main())
