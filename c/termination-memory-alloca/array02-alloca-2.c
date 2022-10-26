#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

void test_fun(int a[], int N)
{
    int i;
    int pos = 0;
    int neg = 0;
    for (i = 0; i < N; i++) {
        while (a[i] < 0) {
            a[i]++;
            neg++;
        }
        while (a[i] > 0) {
            a[i]--;
            pos++;
        }
    }
}

int main() {
  int array_size = __VERIFIER_nondet_int();
  if (array_size < 1) {
     array_size = 1;
  }
  int* numbers = (int*) alloca(array_size * sizeof(int));
  for(int i=0; i<array_size; i++)
  {
      numbers[i] = __VERIFIER_nondet_int();
  }
  test_fun(numbers, array_size);
}
