#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: The char to initialize the array with
 * Return: A pointer to the array, or NULL if it fails.
 * This program conforms to the betty documentation style.
 **/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
{
	return (NULL);
}

	a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
{
	return (NULL);
}

	for (i = 0; i < size; ++i)
{
	a[i] = c;
}

	return (a);
}
