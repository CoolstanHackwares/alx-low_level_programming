#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: A pointer to the first node of the reversed list.
 * This program conforms to the betty documentation style
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
}

	*head = prev;

	return (*head);
}

