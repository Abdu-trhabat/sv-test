extern int __VERIFIER_nondet_int();
extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


struct mem {
    int val;
};

struct list_node {
    int x;
    struct mem *mem;
    struct list_node *next;
};

int main() {
    struct mem *m = safe_malloc(sizeof(*m));
    m->val = 100;

    struct list_node *head = safe_malloc(sizeof(*head));
    head->x = 1;
    head->mem = m;
    head->next = head;

    struct list_node *list = head;

    while (__VERIFIER_nondet_int()) {
        int x = __VERIFIER_nondet_int();
        if (x > 0 && x < 10) {
            struct list_node *n = safe_malloc(sizeof(*n));
            n->x = x;
            n->mem = m;
            n->next = head;
            list->next = n;
        }
    }

    list = head;
    while (list) {
        if (list->mem->val <= 100)
            list->mem->val += list->x;
        else
            list->mem->val -= list->x;
        list = list->next;

        if (!(m->val > 90 && m->val < 110))
            {reach_error();}
    }
}
