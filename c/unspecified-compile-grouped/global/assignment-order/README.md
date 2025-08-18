# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0


This directory contains a set of manually constructed test cases that target **unspecified behavior** as defined in the **C11 standard, Annex J.1**. The focus is specifically on evaluation order and unsequenced side effects involving **global variables**.

The following three sources of unspecified behavior from C11 Annex J.1 are covered:

1. **The order in which subexpressions are evaluated and the order in which side effects take place**,  
   except as specified for the function-call `()`, logical AND `&&`, logical OR `||`, conditional `?:`, and comma `,` operators.  
   *(C11 §6.5)*

2. **The order in which the operands of an assignment operator are evaluated.**  
   *(C11 §6.5.16)*

3. **The order in which the function designator, arguments, and subexpressions within the arguments are evaluated in a function call.**  
   *(C11 §6.5.2.2)*

