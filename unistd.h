#ifndef UNISTD_H
#define UNISTD_H

#include <stddef.h>
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);

#endif