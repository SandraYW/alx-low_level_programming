#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and returns the length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

