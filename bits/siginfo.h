#ifndef _BITS_SIGINFO_H
#define _BITS_SIGINFO_H

#include <sys/types.h>

typedef struct {
    int si_signo;           /* Signal number */
    int si_code;            /* Signal code */
    pid_t si_pid;           /* Sending process ID */
    uid_t si_uid;           /* Real user ID of sending process */
    void *si_addr;          /* Memory location which caused fault */
    int si_status;          /* Exit value or signal */
    long si_band;           /* Band event for SIGPOLL */
} siginfo_t;

#endif /* _BITS_SIGINFO_H */