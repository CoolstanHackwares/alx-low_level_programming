#include "main.h"

/**
 * print_rev - A function that prints a string in reverse,
 * followed by a new line.
 * @s: The string to reverse
 * This program conforms to the betty documentation style
 **/

void print_rev(char *s)
{
	int a, l;

	a = 0;
	while (s[a] != '\0')
{
	a++;
}
	l = a - 1;
	for (a = l; a >= 0; a--)
{
	_putchar(s[a]);
}
	_putchar('\n');
}
