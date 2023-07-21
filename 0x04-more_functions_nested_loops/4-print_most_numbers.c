#include "main.h"

/**
 * print_most_numbers - A program that prints the numbers, from 0 to 9,
 * followed by a new line.
 * This program will skip 2 and 4
 * This program conforms to the betty documentation style
 **/

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
{
	if (a != '2' && a != '4')
{
	_putchar(a);
}
}

	_putchar('\n');
}
