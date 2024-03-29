#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: This function takes a pointer to an array of integers
 * and the number of elements to print, and displays the elements
 * separated by a comma, followed by a space.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

