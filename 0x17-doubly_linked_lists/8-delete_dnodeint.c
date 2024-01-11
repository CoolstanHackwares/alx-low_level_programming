#include "lists.h"

/**
 * delete_dnodeint_at_index - A program that deletes the node at index of
 * a dlistint_t linked list.
 * @head: A pointer to the address of the head of the doubly linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 * This program conforms to the betty documentation style
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int k = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && k < index)
	{
		prev = temp;
		temp = temp->next;
		k++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);

	return (1);
}

