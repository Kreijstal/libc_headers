#ifndef _PTHREAD_H
#define _PTHREAD_H 1

#include <time.h>

/* Scheduling-Parameter */
struct sched_param {
  int sched_priority;
};

/* Thread-Attribute */
typedef struct {
  int detachstate;
  int schedpolicy;
  struct sched_param schedparam;
  int inheritsched;
  int scope;
  size_t guardsize;
  void* stackaddr;
  size_t stacksize;
} pthread_attr_t;

/* Mutex-Attribute */
typedef struct {
  int pshared;
  int kind;
} pthread_mutexattr_t;

/* Bedingungsvariablen-Attribute */
typedef struct {
  int pshared;
} pthread_condattr_t;

/* Thread-spezifische Daten */
typedef unsigned int pthread_key_t;

/* Mutex */
typedef struct {
  unsigned int __lock;
  int __count;
  int __owner;
  int __kind;
  unsigned int __nusers;
} pthread_mutex_t;

/* Bedingungsvariable */
typedef struct {
  int __lock;
  unsigned int __futex;
  unsigned long long int __total_seq;
  unsigned long long int __wakeup_seq;
  unsigned long long int __woken_seq;
  void* __mutex;
  unsigned int __nwaiters;
  unsigned int __broadcast_seq;
} pthread_cond_t;

/* Thread-ID */
typedef unsigned long int pthread_t;

/* Funktionen für Thread-Management */
int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine) (void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_detach(pthread_t thread);
void pthread_exit(void *retval);
pthread_t pthread_self(void);
int pthread_equal(pthread_t t1, pthread_t t2);

/* Funktionen für Thread-Attribute */
int pthread_attr_init(pthread_attr_t *attr);
int pthread_attr_destroy(pthread_attr_t *attr);
int pthread_attr_setdetachstate(pthread_attr_t *attr, int detachstate);
int pthread_attr_getdetachstate(const pthread_attr_t *attr, int *detachstate);

/* Funktionen für Mutexe */
int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
int pthread_mutex_destroy(pthread_mutex_t *mutex);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_trylock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);

/* Funktionen für Bedingungsvariablen */
int pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr);
int pthread_cond_destroy(pthread_cond_t *cond);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_timedwait(pthread_cond_t *cond, pthread_mutex_t *mutex,
                           const struct timespec *abstime);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_broadcast(pthread_cond_t *cond);

/* Funktionen für Thread-spezifische Daten */
int pthread_key_create(pthread_key_t *key, void (*destructor)(void*));
int pthread_key_delete(pthread_key_t key);
int pthread_setspecific(pthread_key_t key, const void *value);
void *pthread_getspecific(pthread_key_t key);

#endif /* _PTHREAD_H */