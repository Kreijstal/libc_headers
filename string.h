#ifndef STRING_H
#define STRING_H

#include <stddef.h>
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);

#endif