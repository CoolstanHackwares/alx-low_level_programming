#include "main.h"

/**
 * _strpbrk - A function that Searches a string for any of a set of bytes.
 * @s: The string to search
 * @accept: The string containing the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * This program conforms to the betty documentation style
 * or NULL if no such byte is found
 **/

char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;

	while (*s != '\0')
{
	char *a = accept;

	while (*a != '\0')
{
	if (*s == *a)
{
	p = s;
	break;
}
	a++;
}

	if (p != NULL)
	break;

	s++;
}

	return (p);
}

