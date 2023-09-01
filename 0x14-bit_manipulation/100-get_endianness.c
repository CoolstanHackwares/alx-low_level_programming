#include "main.h"

/**
 * get_endianness - A function that checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 * This program conforms to the betty documentation style
 **/

int get_endianness(void)
{
	unsigned int t = 1;
	char *b = (char *)&t;

	return ((int)(*b));
}

