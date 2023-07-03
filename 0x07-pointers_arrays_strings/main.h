#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Task 0: memset */
void *_memset(char *s, char c, unsigned int n);

/* Task 1: memcpy */
char *_memcpy(char *dest, const char *src, unsigned int n);

/* Task 2: strchr */
char *_strchr(char *s, char c);

/* Task 3: strspn */
unsigned int _strspn(char *s, char *accept);

/* Task 4: strpbrk */
char *_strpbrk(char *s, char *accept);

/* Task 5: strstr */
char *_strstr(char *haystack, char *needle);

/* Task 7: print_chessboard */
void print_chessboard(char (*a)[8]);

/* Task 8: print_diagsums */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */

