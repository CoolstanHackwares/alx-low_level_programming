#include "main.h"

/**
 * print_line - A program that draws a straight line on the terminal
 * @n: The number of times the character _ should be printed
 * This program conforms to the betty documentation style
 **/

void print_line(int n)

{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int a;

	for (a = 0; a < n; a++)
{
	_putchar('_');
}
	_putchar('\n');
}
}
