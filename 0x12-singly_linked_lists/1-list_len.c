#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 * This code conforms to the betty documentation style
 **/

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}

