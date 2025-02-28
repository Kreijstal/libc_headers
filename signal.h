#ifndef SIGNAL_H
#define SIGNAL_H

#include <sys/types.h>

/* Signal types */
#define SIGHUP    1  /* Hangup */
#define SIGINT    2  /* Interrupt */
#define SIGQUIT   3  /* Quit */
#define SIGILL    4  /* Illegal instruction */
#define SIGABRT   6  /* Abort */
#define SIGFPE    8  /* Floating-point exception */
#define SIGKILL   9  /* Kill */
#define SIGSEGV  11  /* Segmentation violation */
#define SIGPIPE  13  /* Broken pipe */
#define SIGALRM  14  /* Alarm clock */
#define SIGTERM  15  /* Termination */

/* Signal action types */
#define SIG_DFL ((void (*)(int))0)  /* Default action */
#define SIG_IGN ((void (*)(int))1)  /* Ignore signal */

/* Signal function type */
typedef void (*sighandler_t)(int);

/* Signal handling functions */
sighandler_t signal(int signum, sighandler_t handler);
int raise(int sig);

/* sigaction structure */
struct sigaction {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
    sigset_t sa_mask;
    int sa_flags;
};

/* sigaction function */
int sigaction(int signum, const struct sigaction *act,
              struct sigaction *oldact);

#endif /* SIGNAL_H */