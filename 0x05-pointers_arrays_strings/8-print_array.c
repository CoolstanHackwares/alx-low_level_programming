#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that Prints n elements of an array of integers,
 * followed by a new line.
 * @a: The pointer to the array of integers.
 * @n: The number of elements of the array to be printed.
 * This program conforms to the betty documentation style.
 **/

void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	return;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
	printf(", ");
}

	printf("\n");
}

