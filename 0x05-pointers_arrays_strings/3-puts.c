#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and prints the string, followed by a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

