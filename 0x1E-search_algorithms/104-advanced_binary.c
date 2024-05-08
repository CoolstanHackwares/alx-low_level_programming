#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 * the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 * This program conforms to the betty documentation style
 **/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, value, 0, size - 1));
}

/**
 * advanced_binary_helper - A recursive helper function
 * for advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @low: The lower bound index
 * @high: The upper bound index
 *
 * Return: Index where value is located, or -1 if not found
 * This program conforms to the betty documentation style
 **/

int advanced_binary_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid, index;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (index = low; index <= high; index++)
	{
		printf("%d", array[index]);
		if (index < high)
			printf(", ");
	}
	printf("\n");

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_helper(array, value, low, mid));
	}
	else if (array[mid] < value)
	{
		return (advanced_binary_helper(array, value, mid + 1, high));
	}
	else
	{
		return (advanced_binary_helper(array, value, low, mid));
	}
}
