#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 * This code conforms to the betty documentation style
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head != NULL)
{
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
	*head = NULL;
}

