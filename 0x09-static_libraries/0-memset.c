#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with a constant byte b.
 * @s: Pointer to the memory area.
 * @b: The constant byte.
 * @n: The number of bytes to fill.
 *
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n--)
        *ptr++ = b;
    return s;
}

