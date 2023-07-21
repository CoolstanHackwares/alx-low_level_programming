#include "main.h"

/**
 * print_triangle - A program that prints a triangle, followed by a new line
 * @size: The size of the triangle
 * if size is <= 0, the program should only print a new line.
 * This program conforms to the betty documentation style
 **/

void print_triangle(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	int a, b;

	for (a = 1; a <= size; a++)
{
	for (b = 1; b <= a; b++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
