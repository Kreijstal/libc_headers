#ifndef UNISTD_H
#define UNISTD_H

#include <stddef.h>
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);

/* Access modes for eaccess() */
#define F_OK 0 /* Test for existence */
#define X_OK 1 /* Test for execute permission */
#define W_OK 2 /* Test for write permission */
#define R_OK 4 /* Test for read permission */

/* File access functions */
int access(const char *pathname, int mode);
int eaccess(const char *pathname, int mode);

#endif