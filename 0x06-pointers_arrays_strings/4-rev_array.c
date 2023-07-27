#include "main.h"

/**
 * reverse_array - A function that reverses the content of
 * an array of integers.
 * @a: The array to be reversed
 * @n: The number of elements in the array
 * This program conforms to the betty documentation style
 **/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
{
	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
}
}

