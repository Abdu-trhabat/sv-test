# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0

These tasks test unspecified behavior.
This unspecified behavior is based on decisions of the compiler at compile-time for indeterminately sequenced evaluations.
  From C11 5.1.2.3 Program execution: 
    Given any two evaluations A and B, if A is sequenced before B, then the execution of A
    shall precede the execution of B. (...) If A is not sequenced before or after B, then A and B are
    unsequenced. Evaluations A and B are indeterminately sequenced when A is sequenced
    either before or after B, but it is unspecified which.
The tasks in this directory do not contain undefined behavior. If you find undefined behavior on one of the tasks, this is a bug.
While the evaluation of the parameters of a function is inderminately sequenced (C11 §6.5.2.2), most operators (including + - * /) and also assignments (C11 §6.5.16.3) are unsequenced.
However, C11 §6.5.2.2 Function calls states that: 
  "There is a sequence point after the evaluations of the function designator and the actual arguments but before the actual call. 
  Every evaluation in the calling function (including other function calls) that is not otherwise specifically sequenced before or after the
  execution of the body of the called function is indeterminately sequenced with respect to
  the execution of the called function.". 
Which means that not only do function calls introduce sequence points, they also force indeterminately sequenced evaluation because of it.
Furthermore, §5.1.2.3.3 says that "The executions of unsequenced evaluations can interleave. Indeterminately sequenced evaluations
cannot interleave, but can be executed in any order."
So in total, while assignments and most operators are unsequenced, the function calls make sure that there is no interleaving execution in between function calls, or in other words, 
 the evaluation of assignments and unsequenced operators with ONLY function calls, that have side effects on the same scalar object(s), are inderminately sequenced.

For example, the order of operand evaluation in assignments is not specified, i.e. *f1() = f2(); the order of execution of f1() and f2() is inderminately sequenced.
Another example would be f1() + f2() and the ordering of f1() and f2().
A third example would be the evaluation order of function arguments; foo(f1(), f2()), so again the evaluation of f1() and f2() is inderminately sequenced.


Relevant C11 sections include Annex J (Points to relevant unspecified behavior sections in the C11 standard),
  §5.1.2.3 Program execution; defines what unsequenced and indeterminately sequenced evaluations are,
  §6.5.2.2 Function calls; defines the inderminately sequenced behavior of function calls and also sequence points of function calls and the resulting indeterminately sequenced evaluation behavior,
  §5.1.2.3 Program execution; defines what a "side effect" and an "evaluation" is,
  §6.5.16.3 defines which operators are evaluated unsequenced,
  §6.5.2.2 defines that assignments are evaluated unsequenced,
  §5.1.2.3.3 defines the difference between unsequenced evaluations and indeterminately sequenced evaluations.


The tasks are named after the inderminately sequenced behavior tested, safeness, and the side effect type (global variable modified, memory via pointers, structs or arrays modified).
The name is followed by two numbers with a - in between. 
The first number signals the task, so that e.g. 1 and 2 are two different tasks. 
The second number signals the same task with a different final assertion, so that distinct possible results of the inderminately sequenced behavior can be tested.