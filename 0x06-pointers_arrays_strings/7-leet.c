#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to encode
 * Return: The address of s
 * This program conforms to the betty documentation style
 **/

char *leet(char *s)
{
	int f, g;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (f = 0; *(s + i); f++)
{
	for (g = 0; g <= 9; g++)
{
	if (a[g] == s[f])
	s[f] = b[g];
}
}
	return (s);
}
