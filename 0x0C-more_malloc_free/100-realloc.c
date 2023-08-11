#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: The size of the allocated space for ptr
 * @new_size: The size of the new memory block
 * Return: A pointer to the newly allocated memory block
 * This code conforms to the betty documentation style
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
	return (ptr);

	if (!ptr)
	return (malloc(new_size));

	if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

	ptr1 = malloc(new_size);
	if (!ptr1)
	return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	old_size = new_size;

	for (a = 0; a < old_size; a++)
	ptr1[a] = old_ptr[a];

	free(ptr);
	return (ptr1);
}

