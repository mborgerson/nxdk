#ifndef SETJMP_H
#define SETJMP_H

struct __jmp_buf_tag {
	int x;
};

typedef struct __jmp_buf_tag jmp_buf[1]; 
int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int value);

#endif
