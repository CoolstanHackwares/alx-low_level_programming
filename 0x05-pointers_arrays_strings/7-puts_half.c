#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: The string the second half is to be printed.
 * This program conforms to the betty documentation style
 **/

void puts_half(char *str)
{
	int length = 0;
	int n, a;

	while (str[length] != '\0')
{
	length++;
}

	n = (length - 1) / 2;

	if (length % 2 == 0)
{
	a = n + 1;
}
	else
{
	a = n + 2;
}

	while (str[a] != '\0')
{
	_putchar(str[a]);
	a++;
}

	_putchar('\n');
}

