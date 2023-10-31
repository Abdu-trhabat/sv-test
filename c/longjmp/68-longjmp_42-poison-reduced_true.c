#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include<setjmp.h>
jmp_buf env_buffer;
struct c {
  char *g;
};

int u(struct c * t) {
  if (*t->g) {
   return 2;
  } else {
   return 3;
  }
}

void set_g_to_keyword(struct c* t) {
  char keyword[20];
  keyword[0] = 'a';
  t->g = keyword;
}

main() {
  struct c* ab = malloc(sizeof(struct c));
  int x;

  if(setjmp(env_buffer)) {
   __VERIFIER_assert(x == 2);
   set_g_to_keyword(ab);
  }
  else {
   set_g_to_keyword(ab);
   x = 1;
   u(ab);
   x = 2;
   longjmp(env_buffer, 1);
  }
}
