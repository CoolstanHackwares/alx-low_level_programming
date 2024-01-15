#include "main.h"

/**
 * _memcpy - A function that copies n bytes from
 * memory area src to memory area dest
 * @dest: A pointer to the memory area where the data will be copied to
 * @src: A pointer to the memory area where the data will be copied from
 * @n: number of bytes to be copied from src to dest
 * Return: pointer to the destination
 * This program conforms to the betty documentation style
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
char *s = src;

	while (n--)
{
	*d = *s;
	d++;
	s++;
}

	return (dest);
}

