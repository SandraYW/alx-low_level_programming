#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string as a parameter
 *              and prints the second half of the string, followed by a new line.
 *              If the number of characters is odd, it prints the last (n - 1) / 2 characters.
 */
void puts_half(char *str)
{
        int length = 0;
        int i;

        while (str[length] != '\0')
                length++;

        if (length % 2 == 0)
        {
                for (i = length / 2; i < length; i++)
                        _putchar(str[i]);
        }
        else
        {
                for (i = (length + 1) / 2; i < length; i++)
                        _putchar(str[i]);
        }

        _putchar('\n');
}

