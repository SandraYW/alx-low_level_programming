#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 *
 * Description: This function takes a pointer to a string as parameter
 * and reverses the string in place.
 */
void rev_string(char *s)
{
	char temp;
	int len = 0;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		start++;
		s--;
	}
}

