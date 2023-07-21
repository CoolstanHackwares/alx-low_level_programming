#include "main.h"

/**
 * print_diagonal - A program that draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed.
 * This program conforms to the betty documentation style
 **/

void print_diagonal(int n)

{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int a, b;

	for (a = 0; a < n; a++)
{
	for (b = 0; b < a; b++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}
