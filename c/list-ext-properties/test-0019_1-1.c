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


typedef struct {
    int *lo;
    int *hi;
} TData;

static void alloc_data(TData *pdata)
{
    pdata->lo = (int *)safe_malloc(sizeof(int));
    pdata->hi = (int *)safe_malloc(sizeof(int));
    
    *(pdata->lo) = 4;
    *(pdata->hi) = 8;
}

static void free_data(TData *data)
{
    int *lo = data->lo;
    int *hi = data->hi;

    if (*lo >= *hi) {
        free(lo);
        free(hi);
    }

    data->lo = NULL;
    data->hi = NULL;
}

int main() {
    TData data;
    alloc_data(&data);
    free_data(&data);
    return 0;
}
