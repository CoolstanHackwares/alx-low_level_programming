#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
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

	if (temp <= current->next)
{
	*h = NULL;
	free(temp);
	count++;
	break;
}

	current = current->next;
	free(temp);
	count++;
}

	*h = NULL;
	return (count);
}
