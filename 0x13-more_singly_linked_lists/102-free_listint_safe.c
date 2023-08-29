#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint_safe - A function that frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 * This program conforms to the betty documentation style.
 **/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current)
{
	temp = current;
	current = current->next;

	temp->next = NULL;
	free(temp);
	count++;

	if (current == *h)
	break;
}

	*h = NULL;
	return (count);
}
