#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: The square matrix which we will print the sum of its diagonals
 * @size: The size of the matrix
 * This program conforms to the betty documentation style
 **/

void print_diagsums(int *a, int size)
{
	int sum_main = 0, sum_secondary = 0;

	for (int i = 0; i < size; i++)
{
	sum_main += a[(size * i) + i];
	sum_secondary += a[(size * (i + 1)) - (i + 1)];
}

	printf("%d, %d\n", sum_main, sum_secondary);
}

