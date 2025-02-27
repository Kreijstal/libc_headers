#ifndef WCHAR_H
#define WCHAR_H

#include <stddef.h>

typedef unsigned short wchar_t;

size_t wcslen(const wchar_t *s);
wchar_t *wcscpy(wchar_t *dest, const wchar_t *src);

#endif