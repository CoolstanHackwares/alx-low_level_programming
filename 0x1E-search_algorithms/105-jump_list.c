#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using the
 * Jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, or
 * NULL if not found
 * This program conforms to the betty documentation style
 **/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *prev = NULL, *curr = list;

	if (list == NULL)
		return (NULL);

	while (curr->index < size && curr->n < value)
{
	prev = curr;
	for (size_t i = 0; curr->next != NULL && i < jump; i++)
		curr = curr->next;
	printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, curr->index);

	while (prev != NULL && prev->index <= curr->index)
{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
}

	return (NULL);
}
