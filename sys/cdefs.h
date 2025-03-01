#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H

# define __SIZE_TYPE__ unsigned long
# define __WCHAR_TYPE__ int
# define __WINT_TYPE__ unsigned int

# define __linux__ 1
# define __GLIBC__ 2
# define __GLIBC_MINOR__ 15

#if defined(__GNUC__)
# define __GNUC_PREREQ(maj, min) \
 ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#endif
/* Feature test macros */
#define _POSIX_SOURCE 1
#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE 700
#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#define _GNU_SOURCE 1

#endif /* _SYS_CDEFS_H */