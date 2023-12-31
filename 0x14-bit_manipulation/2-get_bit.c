#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 * This program conforms to the betty documentation style
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	return ((n >> index) & 1);
}
