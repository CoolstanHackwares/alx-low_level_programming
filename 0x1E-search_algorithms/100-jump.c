#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The Number of elements in the array
 * @value: The aalue to search for
 *
 * Return: The index where the value is located, or -1 if value is not present
 * in the array or if the array is NULL
 * This program conforms to the betty documentation style
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t a;
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = 0;

	if (array == NULL || size == 0)
	return (-1);

	while (right < size && array[right] < value)
{
	printf("Value checked array[%lu] = [%d]\n", right, array[right]);
	left = right;
	right += jump;
}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (a = left; a <= right && a < size; a++)
{
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	if (array[a] == value)
	return (a);
}

	return (-1);
}
