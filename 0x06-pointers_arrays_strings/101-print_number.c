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

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	} else
	{
		m = n;
	}
	if (m / 10)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
