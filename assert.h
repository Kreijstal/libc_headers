#ifndef ASSERT_H
#define ASSERT_H

#ifdef NDEBUG
#define assert(x) ((void)0)
#else
#define assert(x) ((x) ? (void)0 : __assert_fail (#x, __FILE__, __LINE__, __func__))
#endif

void __assert_fail (const char *__assertion, const char *__file,
		      unsigned int __line, const char *__function);
#endif