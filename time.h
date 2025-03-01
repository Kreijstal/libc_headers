#ifndef _TIME_H
#define _TIME_H

#include <sys/types.h> /* for time_t */

/* Time structure */
struct timespec {
  time_t tv_sec;        /* Sekunden */
  long   tv_nsec;       /* Nanosekunden */
};

#endif /* _TIME_H */