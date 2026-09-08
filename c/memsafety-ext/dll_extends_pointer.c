extern int __VERIFIER_nondet_int(void);
extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

/*
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


typedef struct TData
{
	char x;
} Data;

typedef struct TNode
{
	struct TNode* next;
	struct TNode* prev;
	Data* pData;
	Data data;
} Node;

int main()
{
	Node* list = NULL;
	Node* y = NULL;

	y = safe_malloc(sizeof(*y));
	y->next = NULL;
	y->prev = NULL;
	y->pData = &y->data;
	list = y;

	while (__VERIFIER_nondet_int())
	{
		y = safe_malloc(sizeof(*y));
		y->next = list;
		list->prev = y;

		if (__VERIFIER_nondet_int())
		{
			y->pData = safe_malloc(sizeof(*y->pData));
		}
		else
		{
			y->pData = &y->data;
		}

		list = y;
	}

	while (NULL != list)
	{
		y = list;
		list = list->next;

		if (&y->data != y->pData)
		{
			free(y->pData);
		}

		free(y);
	}

	return 0;
}
