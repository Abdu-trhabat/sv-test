// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Dirk Beyer, Matthias Dangl, Daniel Dietsch, Matthias Heizmann, Thomas Lemberger, and Michael Tautschnig
//
// SPDX-License-Identifier: Apache-2.0

/*@
   requires 1;
   terminates 1;
   exits 1;
   ensures 0 <= \result <= 255;
   assigns \result;
@*/
extern unsigned char __VERIFIER_nondet_uchar(void);

/*@
  @ requires 1;
  @ ensures \result == 0;
  @ exits 1;
  @ assigns \result;
*/
int main() {
  unsigned char n = __VERIFIER_nondet_uchar();

  if (n == 0) {
    return 0;
  }
  //@ assert 0 < n <= 255;
  unsigned char v = 0;
  unsigned int  s = 0;
  unsigned int  i = 0;
  //@ assert 0 <= v <= s <= 0;

  /*@
     loop invariant v <= s <= i*255 && 0 <= i <= n && 1 <= n <= 255;
     loop assigns i, v, s;
     loop variant n - i;
  @*/ 
  while (i < n) {
    v = __VERIFIER_nondet_uchar();
    //@ assert 0 <= v <= 255;
    s = s + v;
    ++i;
  }

  //@ assert v <= s <= n*255;
  if (s < v) {
    //@ assert 0;
    return 1;
  }
  if (s > 65025) {
    //@ assert 0;
    return 1;
  }

  return 0;
}
