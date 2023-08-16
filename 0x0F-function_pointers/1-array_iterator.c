#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter on
 * each element of an array.
 * @size: The size of the array
 * @array: The array to work on
 * @action: A pointer to a function that takes an int as argument
 * This program conforms to the betty documentation style
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && action != NULL && size > 0)
{
	for (a = 0; a < size; a++)
	action(array[a]);
}
}
