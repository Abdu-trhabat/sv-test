#include <stdlib.h>   /* malloc */
#define uthash_malloc(sz) safe_malloc(sz)
#include <stdlib.h>   /* malloc */
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}
#define uthash_malloc(sz) safe_malloc(sz)
#include "uthash_JEN.h"

#include "verifier.h"
#include <assert.h>// variant of test1.c, but with nondeterministic values(cookies)
// and we sum up their value and later check the sum again

typedef struct example_user_t {
    int id;
    int cookie;
    UT_hash_handle hh;
} example_user_t;

int main()
{
    int i;
    example_user_t *user, *users=NULL;

    int sum = 0;
    /* create elements */
    for(i=0; i<10; i++) {
        user = (example_user_t*)safe_malloc(sizeof(example_user_t));
        if (user == NULL) {
            exit(-1);
        }
        user->id = i;
        user->cookie = __VERIFIER_nondet_short();
        sum += user->cookie;
        HASH_ADD_INT(users,id,user);
    }

    for(user=users; user != NULL; user=(example_user_t*)(user->hh.next)) {
        sum -= user->cookie;
    }
    __VERIFIER_assert(sum == 0);
    return 0;
}