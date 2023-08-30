#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * in reverse order, detecting loops.
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

	if (current == s)
{
	printf("-> [%p] %d\n", (void *)current, current->n);
	break;
}

	printf("[%p] %d\n", (void *)current, current->n);
	count++;

	if (current <= current->next)
{
	printf("-> [%p] %d\n", (void *)current->next, current->next->n);
	s = current->next;
}

	current = current->next;
}

	return (count);
}

