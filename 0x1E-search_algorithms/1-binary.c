#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = left + (right - left) / 2;

	if (array == NULL)
	return (-1);

	while (left <= right)
{
	printf("Searching in array: ");
	for (a = left; a <= right; a++)
{
	printf("%d", array[a]);
	if (a < right)
		printf(", ");
}
	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
}

	return (-1);
}
