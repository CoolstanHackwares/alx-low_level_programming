#include "lists.h"

/**
 * delete_nodeint_at_index - A function that eletes the node
 * at a given index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 * This code conforms to the betty documentation style
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *prev;
	listint_t *current;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
}

	prev = NULL;
	current = *head;

	for (a = 0; a < index; a++)
{
	if (current == NULL)
	return (-1);
	prev = current;
	current = current->next;
}

	if (current == NULL)
	return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

