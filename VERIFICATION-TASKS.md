## Definitions

The following definitions are taken from the SV-COMP report
[2016](https://www.sosy-lab.org/~dbeyer/Publications/2016-TACAS.Reliable_and_Reproducible_Competition_Results_with_BenchExec_and_Witnesses.pdf) (and previous years).

A *verification task* consists of
- a [program](#progams),
- a [specification](#specifications) (set of properties), and
- [parameters](#parameters).

A *category* is a set of verification tasks.

A *sub-category* is a set of verification tasks that consist of the same
specification.

A *verification run* is
- a non-interactive execution
- of one verification tool
- on one verification task
- under specific resource constraints
in order to check whether the following statement is correct:
"The program satisfies the specification."

A *verification result* is a triple (ANSWER, WITNESS, TIME) with
- ANSWER is an element from {TRUE, FALSE, UNKNOWN},
- WITNESS is a violation witness or correctness witness in the common [witness format] that supports validation of the (untrusted) answer, and
- TIME is the CPU time that the verification run has consumed (in practice, also other resource measurement values are reported).
