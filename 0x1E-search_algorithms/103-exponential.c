#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array with
 * the exponential search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 * This program conforms to the betty documentation style
 **/

int exponential_search(int *array, size_t size, int value)
{
	size_t start, stop, k;

	if (!array || size == 0)
		return (-1);

	stop = 1;
	start = 1;
	while (stop < size)
	{
		if (value < array[stop])
			break;
		printf("Value checked array[%lu] = [%d]\n", stop, array[stop]);
		start = stop;
		stop = stop * 2;
	}
	k = stop < size - 1 ? stop : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, k);
	return (binary_help(array, value, stop / 2, k));
}

/**
 * binary_help - searches for a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @lo: index of the low bound
 * @hi: index of the high bound
 *
 * Return: the index of the found value,
 * or -1 if not found
 * This program conforms to the betty documentation style
 **/

int binary_help(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_help(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (binary_help(array, value, mid + 1, hi));
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @lo: index of the low bound
 * @hi: index of the high bound
 * This program conforms to the betty documentation style
 **/

void print_array(int *array, size_t lo, size_t hi)
{
	size_t k;

	printf("Searching in array: ");
	for (k = lo; k <= hi; k++)
	{
		printf("%d", array[k]);
		if (k < hi)
			printf(", ");
	}
	printf("\n");
}
