#ifndef STDLIB_H
#define STDLIB_H

#include <stddef.h>

/* Memory management */
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void free(void* ptr);

/* Environment */
char* getenv(const char* name);
int system(const char* command);

/* Searching and sorting */
void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));

/* Random numbers */
int rand(void);
void srand(unsigned int seed);

/* Integer arithmetic */
int abs(int j);
long labs(long j);

/* Conversion */
int atoi(const char *nptr);
long atol(const char *nptr);
double atof(const char *nptr);

#endif