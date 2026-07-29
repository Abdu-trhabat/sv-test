/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__wchar_t_realloc_61b.c
Label Definition File: CWE401_Memory_Leak.c.label.xml
Template File: sources-sinks-61b.tmpl.c
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource: realloc Allocate data using safe_realloc()
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call free() on data
 *    BadSink : no deallocation of data
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

wchar_t * CWE401_Memory_Leak__wchar_t_realloc_61b_badSource(wchar_t * data)
{
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)safe_realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    return data;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
wchar_t * CWE401_Memory_Leak__wchar_t_realloc_61b_goodG2BSource(wchar_t * data)
{
    /* FIX: Use memory allocated on the stack with ALLOCA */
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    return data;
}

/* goodB2G() uses the BadSource with the GoodSink */
wchar_t * CWE401_Memory_Leak__wchar_t_realloc_61b_goodB2GSource(wchar_t * data)
{
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (wchar_t *)safe_realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    return data;
}

#endif /* OMITGOOD */
