#ifndef ASSERT_H
#define ASSERT_H

#include <stdlib.h>  /* For exit() */
#include <stdio.h>   /* For fprintf() */

#undef assert
#ifdef NDEBUG
#define assert(expr) ((void)0)
#else
#define assert(expr) ((expr) ? (void)0 : \
  (fprintf(stderr, "Assertion failed: %s, file %s, line %d\n", #expr, __FILE__, __LINE__), \
   exit(EXIT_FAILURE)))
#endif