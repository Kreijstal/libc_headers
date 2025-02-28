#ifndef SYS_STAT_H
#define SYS_STAT_H

#include <sys/types.h>
struct stat {
    off_t st_size;
    int st_mode;
};
int stat(const char *path, struct stat *buf);

/* File type and permission bits */
#define S_IFMT   0170000 /* Type of file mask */
#define S_IFDIR  0040000 /* Directory */
#define S_IFREG  0100000 /* Regular file */
#define S_IFLNK  0120000 /* Symbolic link */

/* File type macros */
#define S_ISDIR(mode)  (((mode) & S_IFMT) == S_IFDIR)
#define S_ISREG(mode)  (((mode) & S_IFMT) == S_IFREG)
#define S_ISLNK(mode)  (((mode) & S_IFMT) == S_IFLNK)

#endif