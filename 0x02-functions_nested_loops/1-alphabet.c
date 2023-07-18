#include "main.h"

/**
 * print_alphabet - This program prints the letters of the alphabet
 * in lowercase, followed by a new line.
 * Return: 0 (Success)
 * This program conforms to the betty documentation style.
 **/

void print_alphabet(void)
{
	char ha;

	ha = 'a';

	while (ha <= 'z')
	{
	_putchar(ha);
	ha++;
	}
	_putchar('\n');
}

