#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 * This code conforms to the betty documentation style.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
{
	if (count == index)
	return (temp);

	temp = temp->next;
	count++;
}
	return (NULL);
}

