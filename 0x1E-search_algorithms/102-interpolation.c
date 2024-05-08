#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where the value is located, or -1 if not found
 * or array is NULL.
 * This program conforms to the betty documentation style
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
{
	pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
	return (pos);
	else if (array[pos] < value)
		low = pos + 1;
	else
		high = pos - 1;
}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
