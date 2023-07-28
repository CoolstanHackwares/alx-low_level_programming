#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to encode
 * Return: The address of s
 */

char *leet(char *s)
{
	if (s == NULL)
{
	return (NULL);
}

	char letters[] = "aeotl";
	char numbers[] = "43071";

	for (int i = 0; s[i]; i++)
{
	for (int j = 0; letters[j]; j++)
{
	if (s[i] == letters[j] || s[i] == letters[j] - 32)
{
	s[i] = numbers[j];
	break;
}
}
}

	return (s);
}

