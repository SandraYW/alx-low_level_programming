#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and prints every other character of the string, followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

