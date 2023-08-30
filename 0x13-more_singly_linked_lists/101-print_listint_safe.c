#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * in reverse order and detects loops.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 * This program conforms to the betty documentation style.
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *prev = NULL;
	const listint_t *next = NULL;

	while (current)
{
	next = current->next;
	current->next = (listint_t *)prev;
	prev = current;
	current = next;
}

	current = prev;

	while (current)
{
	printf("[%p] %d\n", (void *)current, current->n);
	count++;

	if ((uintptr_t)current->next >= (uintptr_t)current)
{
	printf("-> [%p] %d\n", (void *)current->next, current->next->n);
	break;
}

	current = current->next;
}

	current = prev;
	prev = NULL;
	while (current)
{
	next = current->next;
	current->next = (listint_t *)prev;
	prev = current;
	current = next;
}

	return (count);
}

