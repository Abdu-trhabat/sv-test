/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__twoIntsStruct_malloc_54c.c
Label Definition File: CWE401_Memory_Leak.c.label.xml
Template File: sources-sinks-54c.tmpl.c
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource: malloc Allocate data using safe_malloc()
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call free() on data
 *    BadSink : no deallocation of data
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

/* bad function declaration */
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink(twoIntsStruct * data);

void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_badSink(twoIntsStruct * data)
{
    CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodG2BSink(twoIntsStruct * data);

void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodG2BSink(twoIntsStruct * data)
{
    CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink(twoIntsStruct * data);

void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodB2GSink(twoIntsStruct * data)
{
    CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink(data);
}

#endif /* OMITGOOD */
