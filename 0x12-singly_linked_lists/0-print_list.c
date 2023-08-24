#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that Prints the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function prints the elements of a linked list along with their lengths.
 * If an element's string is NULL, it prints "(nil)".
 *
 * Return: The number of nodes in the list
 * This program conforms to the betty documentation style.
 **/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);

	count++;
	h = h->next;
}

	return (count);
}
