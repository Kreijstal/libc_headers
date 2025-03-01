#ifndef SETJMP_H
#define SETJMP_H

#include <stddef.h>

typedef struct __jmp_buf_tag {
    unsigned long __jmpbuf[8];
    int __mask_was_saved;
} jmp_buf[1];

int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int val);

#endif