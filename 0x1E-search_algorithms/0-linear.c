#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: A Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located,or -1 if value is not present
 * in array or if array is NULL
 * This program conforms to the betty documentation style
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	return (-1);

	for (a = 0; a < size; a++)
{
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	if (array[a] == value)
	return (a);
}

	return (-1);
}
