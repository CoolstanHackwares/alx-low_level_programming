#include "main.h"

/**
 * print_number - A function that Prints an integer
 * @n: The integer to be printed
 * This function prints the integer 'n' using only the _putchar function.
 * This program conforms to the betty documentation style
 **/

void print_number(int n)
{
	unsigned int m;

	if (n == 0)
{
	_putchar('0');
	return ();
}

	if (n < 0)
{
	m = -n;
	_putchar ('-');
}
	else
{
	m = n;
}

	unsigned int divisor = 1;

	while (m / divisor >= 10)

{
	divisor *= 10;
}

	while (divisor != 0)
{
	_putchar((m / divisor) + '0');
	m %= divisor;
	divisor /= 10;
}
}
