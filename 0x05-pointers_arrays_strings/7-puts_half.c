#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: The string the second half is to be printed.
 * This program conforms to the betty documentation style
 **/

void puts_half(char *str)
{
	int n, l;

	n = 0;
	while (str[n] != '\0')
{
	n++;
}
	l = n + 1;
	if (l % 2 == 0)
{
	for (n = l / 2; n < l - 1; n++)
{
	_putchar(str[n]);
}
}
	else
{
	for (n = (l - 1) / 2; n < l - 1; n++)
{
	_putchar(str[n]);
}
}
	_putchar('\n');
}
