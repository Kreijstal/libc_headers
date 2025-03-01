#ifndef STDIO_H
#define STDIO_H

#include <stddef.h>

typedef struct FILE FILE;
extern FILE *stdout;
int printf(const char *fmt, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int scanf(const char *fmt, ...);

#endif