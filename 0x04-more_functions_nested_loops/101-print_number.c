#include "main.h"

/**
 * print_number - A program that prints an integer
 * @n: The integer to be printed
 * This program conforms to the betty documentation style
 **/
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 == 0)
	{
		_putchar('0');
		return;
	}

	unsigned int divisor = 1;

	do {
		divisor *= 10;

	} while (n1 / divisor >= 10);

	do {
		_putchar((n1 / divisor) + '0');
		n1 %= divisor;
		divisor /= 10;
	} while (divisor != 0);
}

