#include "main.h"

/**
 * print_alphabet_x10 - This program prints the letters of the alphabet
 * in lowercase 10x, followed by a new line.
 * Return: 0 (Success)
 * This program conforms to the betty documentation style.
 **/

void print_alphabet_x10(void);
{
	char ha;
	int i;

	i = 0;
	while (i < 10)
{
	ha = 'a';
	while (ha <= 'z')
{
	_putchar(ha);
	ha++;
}
	_putchar('\n');
	i++;
}
}
