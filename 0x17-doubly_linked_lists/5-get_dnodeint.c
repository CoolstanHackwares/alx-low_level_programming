#include "lists.h"

/**
 * get_dnodeint_at_index - A program that returns the
 * nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 * This program conforms to the betty documentation style
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head != NULL)
	{
		if (k == index)
			return (head);

		head = head->next;
		k++;
	}

	return (NULL);
}

