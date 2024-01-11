#include "lists.h"

/**
 * print_dlistint - A funcion that prints a doubly linked list
 * @h: pointer to the list
 *
 * Return: The number of nodes in the list
 * This program conforms to the betty documentation style
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
