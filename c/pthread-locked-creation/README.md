<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Technical University of Munich

SPDX-License-Identifier: MIT
-->

# Locked Pthread Creation Challenges

This suite contains several synthetic test cases making use of synchronization patterns,
where threads are created, while mutexes must be held.
Files whose names have the infix `safe` implement them successfully, whereas those infixed with `race` do not.

These patterns are covered in "Bund, D., Erhard, J., Petter, M., Schwarz, M.: Beyond Locks and Thread IDs: Static Data Race Detection Off the Beaten Path".
To appear at APLAS 2026. Preprint available at https://arxiv.org/abs/2609.00246v1.
They are previously described in "Lu, F., Wang, X., Zeng, Q., Yuan, G., Bao, Y.: Segment-based may-happen-
in-parallel analysis for c programs. Concurrency and Computation: Practice
and Experience 37(21-22), e70203 (2025), doi: 10.1002/cpe.70203"

## Cross-Thread Critical Sections
A mutex is held throughout the execution of another thread, thus protecting that thread.
This pattern was first considered in "Sulzmann, M., Thiemann, P.: Cross-thread critical sections and efficient
dynamic race prediction methods (2023), URL https://arxiv.org/abs/2307.09855"
All files prefixed with `ctcs` use this pattern.

## Happened-Before Relationship
A mutex $m$ is held in thread $A$ while $A$ creates thread $B$. In $B$, $m$ is acquired.
Events after this acquisition must happen after $m$ is released in $A$.
All files prefixed with `hb` use this pattern.

<hr>

All tasks originate from the Goblint benchmark suite.
