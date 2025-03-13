#ifndef _FCNTL_H
#define _FCNTL_H

#include <sys/types.h>

typedef unsigned int mode_t;

/* File access modes */
#define O_RDONLY    00
#define O_WRONLY    01
#define O_RDWR      02

/* File creation flags */
#define O_CREAT     0100
#define O_EXCL      0200
#define O_TRUNC     01000
#define O_APPEND    02000

/* File status flags */
#define O_NONBLOCK  04000
#define O_NDELAY    O_NONBLOCK
#define O_SYNC      04010000
#define O_ASYNC     020000

/* Function declarations */
int open(const char *pathname, int flags, ...);
int creat(const char *pathname, mode_t mode);
int fcntl(int fd, int cmd, ...);

#endif /* _FCNTL_H */