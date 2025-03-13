#ifndef _SYS_TIME_H
#define _SYS_TIME_H

#include <sys/types.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

struct timeval {
  time_t      tv_sec;   /* seconds */
  suseconds_t tv_usec;  /* microseconds */
};

struct timezone {
  int tz_minuteswest; /* minutes west of Greenwich */
  int tz_dsttime;     /* type of DST correction */
};

int gettimeofday(struct timeval *tv, struct timezone *tz);
int settimeofday(const struct timeval *tv, const struct timezone *tz);

#define timercmp(a, b, CMP) \
  (((a)->tv_sec == (b)->tv_sec) ? \
   ((a)->tv_usec CMP (b)->tv_usec) : \
   ((a)->tv_sec CMP (b)->tv_sec))

#ifdef __cplusplus
}
#endif

#endif /* _SYS_TIME_H */