#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and prints the second half of the string, followed by a new line.
 * If the number of characters is odd, it prints the last (n - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

