#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node
 * at a given position in a dlistint_t list.
 * @h: A pointer to the address of the head of the doubly linked list.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 * This program conforms to the betty documentation style
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

