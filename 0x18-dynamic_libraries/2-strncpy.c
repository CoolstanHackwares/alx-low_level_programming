#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 * Return: The pointer to the resulting string dest
 * This program conforms to the betty documentation style
 **/

char *_strncpy(char *dest, char *src, int n)
{
	char *a = dest;

	while (n > 0 && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	n--;
}

	while (n > 0)
{
	*dest = '\0';
	dest++;
	n--;
}

	return (a);
}

