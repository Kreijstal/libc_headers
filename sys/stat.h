#ifndef SYS_STAT_H
#define SYS_STAT_H

#include <sys/types.h>
struct stat {
    off_t st_size;
    int st_mode;
};
int stat(const char *path, struct stat *buf);

#endif