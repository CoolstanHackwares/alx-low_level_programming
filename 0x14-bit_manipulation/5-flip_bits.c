#include "main.h"

/**
 * flip_bits - A function that returns the number of bits to flip to get
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip to convert n to m.
 * This program conforms to the betty documentation style
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int c = 0;

	while (d)
{
	c += d & 1;
	d >>= 1;
}
	return (c);
}

