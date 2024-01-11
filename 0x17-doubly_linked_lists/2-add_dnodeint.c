#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at
 * the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: The data of type int to insert in the new node
 * Return: The address of the new node or NUL if it fails
 * This program conforms to the betty documentation style
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *modified;

	if (!head)
		return (NULL);
	modified = malloc(sizeof(dlistint_t));
	if (!modified)
		return (NULL);
	modified->n = n;
	modified->next = *head;
	modified->prev = NULL;
	if (*head)
		(*head)->prev = modified;
	*head = modified;
	return (modified);
}
