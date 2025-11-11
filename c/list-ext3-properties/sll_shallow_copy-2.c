/*
 * SLL shallow head copy example:
 * Let sll node s point to a new sll node by its next field.
 * Violation: Copy contents of s->next to s and lose track of the first allocation. 
 */
#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


struct node {
  struct node* next;
};

void myexit(int s) {
 _EXIT: goto _EXIT;
}

struct node* alloc_node() {
  struct node* temp = (struct node*) safe_malloc(sizeof(struct node));
  if(NULL == temp) {
    myexit(1);
  }
  return temp;
}

int main() {

  struct node* s = alloc_node();
  s->next = alloc_node();

  /* Lose track of first allocation */
  *s = *(s->next);
  free(s);

  return 0;
}
