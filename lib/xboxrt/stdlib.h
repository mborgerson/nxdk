#ifndef XBOXRT_STDLIB
#define XBOXRT_STDLIB

#include <stdarg.h>
#include <stddef.h>

int vsnprintf(char *buf, unsigned int len, const char *fmt, va_list ap);
int vsprintf(char *buf, const char *fmt, va_list args);
int snprintf(char *str, unsigned int len, const char* fmt, ...);
int sprintf(char *str, const char *fmt, ...);

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t count, size_t size);
void *realloc(void *ptr, size_t size);

long strtol(const char *str, char **endptr, int base);
char * getenv(const char *name);
void qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));

#endif