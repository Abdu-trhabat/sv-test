// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Dirk Beyer, Matthias Dangl, Daniel Dietsch, Matthias Heizmann, Thomas Lemberger, and Michael Tautschnig
//
// SPDX-License-Identifier: Apache-2.0

extern unsigned char __VERIFIER_nondet_uchar(void);
//@ requires true;
//@ ensures (0 <= result) && (result <= 255);

int main() 
//@ requires true;
//@ ensures result == 0;
{
  unsigned char n = __VERIFIER_nondet_uchar();

  if (n == 0) {
    return 0;
  }
  //@ assert 0 < n && n <= 255;
  unsigned char v = 0;
  unsigned int  s = 0;
  unsigned int  i = 0;
  //@ assert 0 == v && 0 == s && 0 == i;

  while (i < n) 
  //@ invariant v <= s && s <= i*255 && 0 <= i && i <= n && 1 <= n && n <= 255;
  {
    v = __VERIFIER_nondet_uchar();
    //@ assert 0 <= v && v <= 255;
    s = s + v;
    ++i;
  }

  //@ assert v <= s && s <= n*255;
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
