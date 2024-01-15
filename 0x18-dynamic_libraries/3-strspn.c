#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: A pointer to the string on which to perform the operation
 * @accept: A pointer to the string containing the list
 * of characters that match in s
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * This program conforms to the betty documentation style
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
{
	for (b = 0; accept[b] != '\0'; b++)
{
	if (s[a] == accept[b])
	break;
}

	if (accept[b] == '\0')
	return (a);
}

	return (a);
}

