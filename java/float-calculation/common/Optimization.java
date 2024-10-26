/*
 * This benchmark task is a modification of the following original Benchmark:
 * Origin of the benchmark:
 * 	   license: MIT (see /java/jayhorn-recursive/LICENSE)
 *     repo: https://github.com/osl/concolic-walk
 *     branch: master
 *     root directory: experiments/src/programs/optimization/
 * The benchmark was taken from the repo: 8 October 2024
 *
 * Following the original license model, modifications are as well licensed  under the
 * MIT license.
 */
/**
 * Functions used to test optimization software. See J. J. More, B. S. Garbow, and K. E. Hillstrom.
 * Testing unconstrained optimization software. ACM Trans. Math. Software, 7(1):17--41, 1981.
 *
 * <p>Ported from the C# implementation given in K. Lakhotia, N. Tillmann, M. Harmann, and J. de
 * Halleaux. FloPSy - Search-Based Floating Point Constraint Solving for Symbolic Execution" (Table
 * 2).
 */
public class Optimization {

  public static final void beale(double x1, double x2) {
    if ((1.5 - x1 * (1.0 - x2)) == 0.0) {
      assert false;
    }
  }

  public static final void freudensteinRoth(double x1, double x2) {
    if ((-13.0 + x1 + ((5.0 - x2) * x2 - 2.0) * x2) + (-29.0 + x1 + ((x2 + 1.0) * x2 - 14.0) * x2)
        == 0.0) {
      assert false;
    }
  }

  public static final void helicalValley(double x1, double x2, double x3) {
    if (10.0 * (x3 - 10.0 * theta(x1, x2)) == 0
        && (10.0 * (Math.sqrt(x1 * x1 + x2 * x2) - 1)) == 0.0
        && x3 == 0.0) {
      assert false;
    }
  }

  public static final void powell(double x1, double x2) {
    if ((Math.pow(10, 4) * x1 * x2 - 1.0) == 0.0
        && (Math.pow(Math.E, -x1) + Math.pow(Math.E, -x2) - 1.0001) == 0.0) {
      assert false;
    }
  }

  public static final void rosenbrock(double x1, double x2) {
    if (Math.pow((1.0 - x1), 2) + 100.0 * (Math.pow((x2 - x1 * x1), 2)) == 0.0) {
      assert false;
    }
  }

  public static final void wood(double x1, double x2, double x3, double x4) {
    if ((10.0 * (x2 - x1 * x1)) == 0.0
        && (1.0 - x1) == 0.0
        && (Math.sqrt(90) * (x4 - x3 * x3)) == 0.0
        && (1.0 - x3) == 0.0
        && (Math.sqrt(10) * (x2 + x4 - 2.0)) == 0.0
        && (Math.pow(10, -0.5) * (x2 - x4)) == 0.0) {
      assert false;
    }
  }
}
