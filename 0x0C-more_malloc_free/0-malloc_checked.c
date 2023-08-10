#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The size of memory to allocate
 * Return: A pointer to the allocated memory, or 98 if malloc fails
 * This program conforms to the betty documentation style
 **/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
{
	exit(98);
}

	return (p);
}

