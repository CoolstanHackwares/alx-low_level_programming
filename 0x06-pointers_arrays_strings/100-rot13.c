#include "main.h"

/**
 * rot13 - A function that encodes a string in rot13
 * @s: The string to be encoded
 * Return: The resulting string
 * This program conforms to the betty documentation style
 **/

char *rot13(char *s)
{
	int c, d;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\0'; c++)
{
	for (d = 0; a[d] != '\0'; d++)
{
	if (s[c] == a[d])
{
	s[c] = b[d];
	break;
}
}
}
	return (s);
}
