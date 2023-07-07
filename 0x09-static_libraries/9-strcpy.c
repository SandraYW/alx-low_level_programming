#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

