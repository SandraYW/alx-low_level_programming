#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 *           the constant byte c
 * @s: Pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area (s)
 */
void *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;

	return s;
}

