#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H

#include <sys/types.h>

#define PROT_NONE       0x00
#define PROT_READ       0x01
#define PROT_WRITE      0x02
#define PROT_EXEC       0x04

#define MAP_SHARED      0x01
#define MAP_PRIVATE     0x02
#define MAP_FIXED       0x10
#define MAP_ANONYMOUS   0x20

#define MS_ASYNC        0x01
#define MS_SYNC         0x02
#define MS_INVALIDATE   0x04

#define MCL_CURRENT     0x01
#define MCL_FUTURE      0x02

#ifdef __cplusplus
extern "C" {
#endif

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
int msync(void *addr, size_t length, int flags);
int mlock(const void *addr, size_t len);
int munlock(const void *addr, size_t len);
int mlockall(int flags);
int munlockall(void);
void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, ...);
int posix_madvise(void *addr, size_t len, int advice);

#ifdef __cplusplus
}
#endif

#endif /* _SYS_MMAN_H */