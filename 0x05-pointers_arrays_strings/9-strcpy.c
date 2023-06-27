#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination string
 *
 * Description: This function takes a pointer to the source string
 * and copies the string, including the terminating null byte,
 * to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}

