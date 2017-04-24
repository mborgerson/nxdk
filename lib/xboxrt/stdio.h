#ifndef STDIO_H
#define STDIO_H

#include <string.h>

typedef int FILE;
FILE *fopen(const char *path, const char *mode);
int fclose(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nitems, FILE *stream);

     int
     fseek(FILE *stream, long offset, int whence);

     long
     ftell(FILE *stream);

enum {
	SEEK_CUR = 0,
	SEEK_SET = 1,
	SEEK_END = 2,
};

char *
strstr(const char *big, const char *little);

#endif