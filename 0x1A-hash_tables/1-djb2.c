#include "hash_tables.h"

/**
 * hash_djb2 - A function that implements the djb2 algorithm
 * for hashing strings
 * @str: The string to hash
 *
 * Return: The hashed value
 * This program conforms to the betty documentation style
 **/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
