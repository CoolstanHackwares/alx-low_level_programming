#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that Converts a binary number
 * to an unsigned int.
 * @b: A pointer to a string of binary characters (0s and 1s).
 *
 * Return: The converted unsigned int, or 0 if there
 * is an invalid character or if b is NULL.
 * This program conforms to the betty documentation style
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int y = 1;
	int k;

	if (b == NULL)
	return (0);

	for (k = 0; b[k] != '\0'; k++)
{
	if (b[k] != '0' && b[k] != '1')
	return (0);
}

	k--;

	while (k >= 0)
{
	if (b[k] == '1')
	x += y;

	y *= 2;
	k--;
}

	return (x);
}
