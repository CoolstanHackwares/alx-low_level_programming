#include "main.h"

/**
 * print_number - A function that Prints an integer
 * @n: The integer to be printed
 * This function prints the integer 'n' using only the _putchar function.
 * This program conforms to the betty documentation style
 **/

void print_number(int n)
{
	unsigned int j;
	if (n < 0)
{
	_putchar('-');
	j = -n;
}

	if (n / 10 != 0)
{
	print_number(n / 10);
}

	_putchar('0' + (n % 10));
}

