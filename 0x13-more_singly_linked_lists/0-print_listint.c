#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that Prints the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * This function prints the elements of a linked list along with their lengths.
 *
 * Return: The number of nodes in the list
 * This program conforms to the betty documentation style.
 **/

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
{
	printf("%d\n", h->n);

	h = h->next;
	s++;
}
	return (s);
}
