#include "lists.h"

/**
 * sum_dlistint A function that Returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 * This program conforms to the betty documentation style
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

