#include "main.h"

/**
 * _puts_recursion - A function that prints a string followed by a new line
 * using recursion.
 * @s: The string to print
 * Return: Nothing
 * This program conforms to the betty documentation style.
 **/

void _puts_recursion(char *s)

{
	if (*s == '\0')
{
	_putchar('\n');
	return;
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
