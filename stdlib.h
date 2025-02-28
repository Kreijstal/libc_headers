#ifndef STDLIB_H
#define STDLIB_H

typedef unsigned long size_t;

void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void free(void* ptr);
char* getenv(const char* name);

#endif