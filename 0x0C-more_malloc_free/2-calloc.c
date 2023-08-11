#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: The array
 * @size: The size of the elements of the array
 * Return: A pointer to the allocated memory
 * This program conforms to the betty documentation style
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_memory = NULL;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
	return (NULL);

	allocated_memory = malloc(nmemb * size);

	if (allocated_memory == NULL)
	return (NULL);

	while (a < (nmemb * size))
{
	allocated_memory[a] = 0;
	a++;
}

	return (allocated_memory);
}

