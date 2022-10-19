#include <stdlib.h>

extern int __VERIFIER_nondet_int(void);

void chunk(int *data) {
	if(data[0] >= data[3]) {
    free(data); 
		return;
	}
	data[0]++;
	
	
	chunk(data);
}


int main() {
	int *data  = malloc(4*sizeof(int));
	
	data[0] = __VERIFIER_nondet_int();
	data[3] = __VERIFIER_nondet_int();
	
	if(data[0] >= data[3]) {
    free(data);  
		return 0;
	}
	chunk(data);
	
	
}