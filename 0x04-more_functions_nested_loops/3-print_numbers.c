#include "main.h"

/**
 * print_numbers - A program that prints the numbers, from 0 to 9,
 * followed by a new line.
 * This program conforms to the betty documentation style
 **/

void print_numbers(void)

{
	char a;

	for (a = '0'; a <= '9'; a++)
{
	_putchar(a);
}

	_putchar('\n');
}
