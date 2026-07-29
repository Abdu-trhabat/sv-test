/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE690_NULL_Deref_From_Return__int64_t_realloc_61b.c
Label Definition File: CWE690_NULL_Deref_From_Return.free.label.xml
Template File: source-sinks-61b.tmpl.c
*/
/*
 * @description
 * CWE: 690 Unchecked Return Value To NULL Pointer
 * BadSource: realloc Allocate data using safe_realloc()
 * Sinks:
 *    GoodSink: Check to see if the data allocation failed and if not, use data
 *    BadSink : Don't check for NULL and use data
 * Flow Variant: 61 Data flow: data returned from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
extern void abort(void);
extern void *realloc(void *ptr, size_t size);
void *safe_realloc(void *ptr, size_t size) {
  void *p = realloc(ptr, size);
  if (p == 0) {
    abort();
  }
  return p;
}


#ifndef OMITBAD

int64_t * CWE690_NULL_Deref_From_Return__int64_t_realloc_61b_badSource(int64_t * data)
{
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)safe_realloc(data, 1*sizeof(int64_t));
    return data;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodB2G() uses the BadSource with the GoodSink */
int64_t * CWE690_NULL_Deref_From_Return__int64_t_realloc_61b_goodB2GSource(int64_t * data)
{
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)safe_realloc(data, 1*sizeof(int64_t));
    return data;
}

#endif /* OMITGOOD */
