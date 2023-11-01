/*
 * Basic Single-Linked List
 * Functions which create, traverse, and destroy list
 */
#define PREDATOR
#include <stdlib.h>

#ifdef PREDATOR
extern int __VERIFIER_nondet_int(void);
#define random() __VERIFIER_nondet_int()
#endif

struct sll {
    struct sll *next;
};


struct sll* alloc_and_zero(void)
{
    struct sll *pi = malloc(sizeof(*pi));
    pi->next = NULL;

    return pi;
}

struct sll* create(void)
{
    struct sll *sll = alloc_and_zero();
    struct sll *now = sll;

    while(random()) {
        now->next = alloc_and_zero();
        now = now->next;
    }
    return sll;
}

void loop(struct sll *l)
{
    struct sll *node = l;
    while (node) {
        node = node->next;
    }
}

void destroy(struct sll *l)
{
    while (l) {
        struct sll *next = l->next;
        free(l);
        l = next;
    }
}

int main()
{
    struct sll *l = create();
    loop(l);
    destroy(l);
    return 0;
}
