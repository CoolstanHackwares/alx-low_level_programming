#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: The number of elements in the array
 * @array: The array of integers
 * @cmp: A pointer to the function to be used to compare values
 * @Return: index of first element for which cmp matches,
 * (if no element matches and if size is <= 0 return -1).
 * This program conforms to the betty documentation stye
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL && size > 0)
{
	for (a = 0; a < size; a++)
{
	if (cmp(array[a]) != 0)
	return (a);
}
}
	return (-1);
}
