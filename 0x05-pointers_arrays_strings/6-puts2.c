#include "main.h"

/**
 * puts2 - A function that Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer to the string to be printed.
 * This program conforms to the betty documentation style.
 **/
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
{
	_putchar(str[a]);
	a += 2;
}

	_putchar('\n');
}

