#ifndef STRING_H
#define STRING_H

#include <stddef.h>

/* Copying */
void *memcpy(void *dest, const void *src, size_t n);
void *mempcpy(void *dest, const void *src, size_t n);
char *stpcpy(char *dest, const char *src);
char *strcpy(char *dest, const char *src);

/* Concatenation */
char *strcat(char *dest, const char *src);

/* Comparison */
int strcmp(const char *s1, const char *s2);
int strcoll(const char *s1, const char *s2);

/* Search */
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);

/* Miscellaneous */
char *strdup(const char *s);
size_t strlen(const char *s);

#endif