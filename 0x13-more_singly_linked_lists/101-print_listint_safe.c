#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * in reverse order.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 * This program conforms to the betty documentation style.
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *s = NULL;

	while (current)
{
	printf("%d\n", current->n);
	count++;

	if (current <= current->next)
{
	printf("-> %d\n", current->next->n);
	s = current->next;
	break;
}

	current = current->next;
}

	while (s && s != current)
{
	printf("%d\n", s->n);
	s = s->next;
	count++;
}

	return (count);
}
