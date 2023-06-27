#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and prints the string in reverse, followed by a new line.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}

	_putchar('\n');
}

