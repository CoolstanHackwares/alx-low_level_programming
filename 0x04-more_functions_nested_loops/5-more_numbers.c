#include "main.h"

/**
 * more_numbers - A program that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * This program conforms to the betty documentation style
 **/

void more_numbers(void)

{
	int f, g;

	for (f = 0; f < 10; f++)
{
	for (g = 0; g <= 14; g++)
{
	if (g > 9)
{
	_putchar('0' + (g / 10));
}
	_putchar('0' + (g % 10));
}
	_putchar('\n');
}
}
