typedef long unsigned int size_t;
extern void abort(void);
extern void *malloc(size_t size);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


void * __attribute__((__cdecl__)) safe_malloc (size_t __size) ;
void __attribute__((__cdecl__)) free (void *) ;
 
extern int __VERIFIER_nondet_int(void);
 
void merge (int *a, int n, int m) {
    int i, j, k;
    int *x = safe_malloc(n * sizeof (int));
    for (i = 0, j = m, k = 0; k < n; k++) {
        x[k] = j == n      ? a[i++]
             : i == m      ? a[j++]
             : a[j] < a[i] ? a[j++]
             :               a[i++];
    }
    for (i = 0; i < n; i++) {
        a[i] = x[i];
    }
    free(x);
}
 
void merge_sort (int *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    merge_sort(a, m);
    merge_sort(a + m, n - m);
    merge(a, n, m);
}
 
int main () {
	int n = __VERIFIER_nondet_int();
	
	if(n < 1) 
		return 0;
	
	
	int *a = safe_malloc(n * sizeof (int));
	for(int i = 0; i < n; i++) {
		a[i] = __VERIFIER_nondet_int();
	}

    merge_sort(a, n);
	free(a);

}