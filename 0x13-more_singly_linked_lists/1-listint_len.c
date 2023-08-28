#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 * This code conforms to the betty documentation style
 **/

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
{
	c++;
	h = h->next;
}
	return (c);
}
