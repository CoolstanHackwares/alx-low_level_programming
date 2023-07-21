#include "main.h"

/**
 * print_square - A program that prints a square
 * followed by a new line.
 * @size: The size of the square
 * This program conforms to the betty documentation style
 **/

void print_square(int size)

{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	int a, b;

	for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
