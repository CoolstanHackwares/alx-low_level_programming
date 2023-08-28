#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer to the head of the linked list.
 * This code conforms to the betty documentation style
 **/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
