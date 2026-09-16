#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


extern int __VERIFIER_nondet_int(void);

void chunk(int **data) {
	int *p0 = data[0];
	int *p1 = data[1];
	int *p2 = data[2];
	int *p3 = data[3];
	
	if(*p0 >= *p3) 
		return;
	
	(*p0)++;
	
	
	free(p1);
	
	data[1] =  p2;
	data[2] = safe_malloc(sizeof(int*));
	
	chunk(data);
}


int main() {
	int **data  = safe_malloc(4*sizeof(int*));
	
	
	int *p0 = safe_malloc(sizeof(int));
	int *p1 = safe_malloc(sizeof(int));
	int *p2 = safe_malloc(sizeof(int));
	int *p3 = safe_malloc(sizeof(int));
	
	
	int i = __VERIFIER_nondet_int();
	int upper = __VERIFIER_nondet_int();
	
	if(i >= upper)
		return 0;
	
	*p0 = i;
	*p3 = upper;
	
	

	data[0] = p0;
	data[1] = p1;
	data[2] = p2;
	data[3] = p3;
	

	
	chunk(data);
	
	
	int *p1_new = (int*) data[1];
	int *p2_new = (int*) data[2];
	
	free(p1_new);
	free(p2_new);
	
}