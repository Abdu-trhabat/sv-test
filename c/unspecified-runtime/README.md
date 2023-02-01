The tasks are built such that they test unspecified runtime issues.
For example memory alignment can change in each execution of the same program, without a recompiliation.
Example: malloc(128) < malloc(128)

Relevant C11 sections include Annex J (Unspecified Behavior) and 6.5.8.