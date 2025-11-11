// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Roman Amjaga
//
// SPDX-License-Identifier: Apache-2.0

// https://www.cvedetails.com/cve/CVE-2023-49355/
// repository: https://github.com/jqlang/jq
// commit: 88f01a7
// extract of: src/decNumber/decNumber.c (function: decToString)

#include <string.h>
#include <stdlib.h>
void *safe_calloc(size_t num, size_t size) {
  void *p = calloc(num, size);
  if (p == 0) {
    abort();
  }
  return p;
}

#include <stdio.h>
#include "helpers.c"

void decToString(char *input, char *string) {
  char *c = string;
  char *b = input;
  while (*b) {
    if (*b == 'a') {
      strcpy(c, "A found"); // Problem: potential stack buffer overflow
      c += 7;
    } else {
      *c = '-'; // Problem: potential stack buffer overflow
      c++;
    }
    b++;
  }
}

int main() {
  char* randomString = getRandomString(50, 500);
  char* converted = safe_calloc(strlen(randomString) + 1, sizeof(char));
  if (converted == NULL) {
    printf("Out of memory\n");
    free(randomString);
    exit(1);
  }
  decToString(randomString, converted);
  printf("%s\n", converted);
  free(converted);
  free(randomString);
}
