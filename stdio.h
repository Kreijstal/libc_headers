#ifndef STDIO_H
#define STDIO_H

typedef struct FILE FILE;
extern FILE *stdout;
int printf(const char *fmt, ...);
int scanf(const char *fmt, ...);

#endif