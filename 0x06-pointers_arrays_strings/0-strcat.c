#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The string to append to
 * @src: The string to add
 * Return: A pointer to the resulting string
 * This program conforms to the betty documentation style
 **/

char *_strcat(char *dest, const char *src)
{
	char *a = dest;

	while (*dest)
	dest++;

	while (*src)
{
	*dest = *src;
	dest++;
	src++;
}

	*dest = '\0';

	return (a);
}

