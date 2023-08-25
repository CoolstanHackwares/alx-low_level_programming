#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a linked list.
 * @head: A pointer to the head of the linked list.
 * This code conforms to the betty documentation style
 **/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

