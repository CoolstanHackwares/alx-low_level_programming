#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - A program that returns the sum of all the data
 * in a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The sum of all the data (n), or 0 if the list is empty.
 * This code conforms to the betty documentation style
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
{
	sum += temp->n;
	temp = temp->next;
}

	return (sum);
}

