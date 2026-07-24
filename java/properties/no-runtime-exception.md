During the execution of the program, no RuntimeException must be reachable from the main method.

RuntimeException includes all of its subclasses, thrown either by the code or the JVM during execution.

Exceptions caught somewhere in the code are not considered a target by this property. Only those that lead to termination of execution and are externable observable.
