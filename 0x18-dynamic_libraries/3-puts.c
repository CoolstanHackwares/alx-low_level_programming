#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line to stdout.
 * @str: The pointer to the string to be printed.
 * This program conforms to the betty documentation style
 **/
void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
