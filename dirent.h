#ifndef DIRENT_H
#define DIRENT_H

#include <sys/types.h>

/* Directory stream type */
typedef struct {
    int fd;                 /* File descriptor */
    struct dirent *current; /* Current directory entry */
} DIR;

/* Directory entry structure */
struct dirent {
    ino_t d_ino;            /* Inode number */
    off_t d_off;            /* Offset to next dirent */
    unsigned short d_reclen;/* Length of this record */
    unsigned char d_type;   /* Type of file */
    char d_name[256];       /* Filename */
};

/* Directory functions */
DIR *opendir(const char *name);
struct dirent *readdir(DIR *dirp);
int closedir(DIR *dirp);
int dirfd(DIR *dirp);

#endif /* DIRENT_H */