#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_in_loop - A helper function that checks if a given node is present
 * in the linked list.
 * @head: A pointer to the head of the linked list.
 * @node: A pointer to the node to be checked.
 * Return: 1 if the node is in the list, 0 otherwise.
 * This program conforms to the betty documentation style
 **/

int is_in_loop(const listint_t *node)
{
	const listint_t *tortoise;
	const listint_t *hare;

	tortoise = node;
	hare = node;

	while (hare != NULL && hare->next != NULL)
{
	tortoise = tortoise->next;
	hare = hare->next->next;

	if (tortoise == hare)
{
	return (1);
}
}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 * This program conforms to the betty documentation style
 **/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current;

	current = head;

	if (is_in_loop(current))
{
	while (1)
{
	printf("[%p] %d\n", (void *)current, current->n);
	count++;
	current = current->next;
	if (current == NULL || current->next == NULL)
	break;
}
	if (current != NULL)
	printf("-> [%p] %d\n", (void *)current, current->n);
}
	else
{
	while (current != NULL)
{
	printf("[%p] %d\n", (void *)current, current->n);
	count++;
	current = current->next;
}
}
	return (count);
}
