extern int __VERIFIER_nondet_int(void);
extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

/*
 * The Deutsch-Schorr-Waite tree traversal algorithm
 *
 * This source code is licensed under the GPLv3 license.
 *
 * Taken from Forester.
 */

#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


int main() {

	struct TreeNode {
		struct TreeNode* left;
		struct TreeNode* right;
	};

	struct StackItem {
		struct StackItem* next;
		struct TreeNode* node;
	};

	struct TreeNode* root = safe_malloc(sizeof(*root)), *n;
	root->left = NULL;
	root->right = NULL;

	while (__VERIFIER_nondet_int()) {
		n = root;
		while (n->left && n->right) {
			if (__VERIFIER_nondet_int())
				n = n->left;
			else
				n = n->right;
		}
		if (!n->left && __VERIFIER_nondet_int()) {
			n->left = safe_malloc(sizeof(*n));
			n->left->left = NULL;
			n->left->right = NULL;
		}
		if (!n->right && __VERIFIER_nondet_int()) {
			n->right = safe_malloc(sizeof(*n));
			n->right->left = NULL;
			n->right->right = NULL;
		}
	}

	struct TreeNode sentinel;

	n = root;
	struct TreeNode* pred = &sentinel;
	struct TreeNode* succ = NULL;

	while (n != &sentinel) {
		succ = n->left;
		n->left = n->right;
		n->right = pred;
		pred = n;
		n = succ;
		if (!n) {
			n = pred;
			pred = NULL;
		}
	}

	if (pred != root)
		((struct TreeNode*)NULL)->left = NULL;

	n = NULL;

	struct StackItem* s = safe_malloc(sizeof(*s)), *st;
	s->next = NULL;
	s->node = root;

	while (s != NULL) {
		st = s;
		s = s->next;
		n = st->node;
		free(st);
		if (n->left) {
			st = safe_malloc(sizeof(*st));
			st->next = s;
			st->node = n->left;
			s = st;
		}
		if (n->right) {
			st = safe_malloc(sizeof(*st));
			st->next = s;
			st->node = n->right;
			s = st;
		}
		free(n);
	}

	return 0;
}
