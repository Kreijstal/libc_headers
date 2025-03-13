#ifndef _DLFCN_H
#define _DLFCN_H 1

//#include <bits/dlfcn.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RTLD_LAZY   0x00001
#define RTLD_NOW    0x00002
#define RTLD_BINDING_MASK   0x3
#define RTLD_NOLOAD 0x00004
#define RTLD_DEEPBIND   0x00008
#define RTLD_GLOBAL 0x00100
#define RTLD_LOCAL  0x00000
#define RTLD_NODELETE   0x01000

extern void *dlopen (const char *__file, int __mode);
extern int dlclose (void *__handle);
extern void *dlsym (void *__restrict __handle,
        const char *__restrict __name);
extern char *dlerror (void);

#ifdef __cplusplus
}
#endif

#endif /* dlfcn.h */