#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 * This program conforms to the betty documentation style
 **/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
{
	*p = b;
	p++;
}

	return (s);
}
