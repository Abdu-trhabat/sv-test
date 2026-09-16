<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Technical University of Munich

SPDX-License-Identifier: MIT
-->

# Pthread Once Challenges

This suite contains several synthetic test cases making use of pthread once.
It contains both data race tasks (prefixed with `norace`) and reachability tasks (prefixed with `unreach`).
The infixes `race` and `safe`/`reachable` and `unreachable` indicate the expected outcome.

Background is provided in "Bund, D., Erhard, J., Petter, M., Schwarz, M.: Beyond Locks and Thread IDs: Static Data Race Detection Off the Beaten Path".
To appear at APLAS 2026. Preprint available at https://arxiv.org/abs/2609.00246v1.

All tasks originate from the Goblint benchmark suite.
