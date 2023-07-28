#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to encode
 * Return: The address of s
 * This program conforms to the betty documentation style
 **/

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
{
	for (j = 0; j <= 9; j++)
{
	if (a[j] == s[i])
	s[i] = b[j];
}
}
	return (s);
}
