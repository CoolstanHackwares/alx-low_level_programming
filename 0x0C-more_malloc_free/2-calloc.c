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
	void *allocated_memory;

	if (nmemb == 0 || size == 0)
	return (NULL);

	allocated_memory = malloc(nmemb * size);

	if (allocated_memory == NULL)
	return (NULL);

	unsigned int a;
	unsigned int total_size;
	char *p;

	p = (char *)allocated_memory;
	total_size = nmemb * size;
    
	for (a = 0; a < total_size; a++)
	p[a] = 0;

	return (allocated_memory);
}

