#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 * in the array or if the array is NULL
 * This program conforms to the betty documentation style
 **/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	return (binary_help(array, value, 0, size - 1));
}

/**
 * binary_help - A recursive helper function for binary search
 * @array: A pointer to the first element of the array to search in
 * @value: The value to search for
 * @lo: The Lower bound index
 * @hi: The Upper bound index
 *
 * Return: The index where value is located, or -1 if the value is not present
 * in the array
 * This program conforms to the betty documentation style
 **/

int binary_help(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);

	if (lo == hi && array[lo] != value)
	return (-1);

	mid = lo + (hi - lo) / 2;

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	return (binary_help(array, value, mid + 1, hi));
	else
	return (binary_help(array, value, lo, mid));
}

/**
 * print_array - Prints the array elements within a specified range
 * @array: A pointer to the first element of the array
 * @lo: The Lower bound index
 * @hi: The Upper bound index
 * This program conforms to the betty documentation style
 **/

void print_array(int *array, size_t lo, size_t hi)
{
	size_t a;

	printf("Searching in array: ");
	for (a = lo; a <= hi; a++)
{
	printf("%d, ", array[a]);
}
	printf("%d\n", array[a]);
}
