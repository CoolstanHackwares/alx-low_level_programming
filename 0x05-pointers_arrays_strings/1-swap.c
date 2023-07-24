#include "main.h"

/**
 * swap_int - A function that Swaps the values of two integers.
 * @a: The pointer to the first integer.
 * @b: The pointer to the second integer.
 * This program conforms to the betty documentation style.
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

