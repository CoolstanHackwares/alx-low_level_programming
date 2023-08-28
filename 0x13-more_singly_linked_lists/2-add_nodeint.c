#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at
 * the beginning of a listint_t list
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The int to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 * This code conforms to the betty documentation style
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;


	if (head == NULL)
	return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
