#include "lists.h"

/**
 * dlistint_len - A function that returns the number of nodes
 * in a doubly linked list
 * @h: pointer to the list
 *
 * Return: The number of nodes
 * This program conforms to the betty documentation style
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
