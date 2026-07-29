/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE415_Double_Free__malloc_free_struct_61b.c
Label Definition File: CWE415_Double_Free__malloc_free.label.xml
Template File: sources-sinks-61b.tmpl.c
*/
/*
 * @description
 * CWE: 415 Double Free
 * BadSource:  Allocate data using safe_malloc() and Deallocate data using free()
 * GoodSource: Allocate data using safe_malloc()
 * Sinks:
 *    GoodSink: do nothing
 *    BadSink : Deallocate data using free()
 * Flow Variant: 61 Data flow: data returned from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
extern void abort(void);
extern void *malloc(size_t size);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


#ifndef OMITBAD

twoIntsStruct * CWE415_Double_Free__malloc_free_struct_61b_badSource(twoIntsStruct * data)
{
    data = (twoIntsStruct *)safe_malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    return data;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
twoIntsStruct * CWE415_Double_Free__malloc_free_struct_61b_goodG2BSource(twoIntsStruct * data)
{
    data = (twoIntsStruct *)safe_malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* FIX: Do NOT free data in the source - the bad sink frees data */
    return data;
}

/* goodB2G() uses the BadSource with the GoodSink */
twoIntsStruct * CWE415_Double_Free__malloc_free_struct_61b_goodB2GSource(twoIntsStruct * data)
{
    data = (twoIntsStruct *)safe_malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    return data;
}

#endif /* OMITGOOD */
