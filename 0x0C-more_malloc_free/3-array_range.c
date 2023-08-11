#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The minimum integer
 * @max: The maximum integer
 * Return: The pointer to the newly created array
 * This code conforms to the betty documentation style
 **/

int *array_range(int min, int max)
{
	int range;
	int *a;
	int k;

	if (min > max)
	return (NULL);

	range = max - min + 1;
	a = malloc(sizeof(int) * range);
	if (a == NULL)
		return (NULL);

	for (k = 0; k < range; k++)
		a[k] = min + k;

	return (a);
}

