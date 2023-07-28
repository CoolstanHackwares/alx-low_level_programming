#include "main.h"

/**
 * cap_string - A function that capitalizes every word of a string
 * @a: The string to modify
 * Return: the modified string
 * This program conforms to the betty documentation style
 **/

char *cap_string(char *a)
{
	int f, g;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (f = 0; a[f] != '\0'; f++)
{
	if (f == 0 && a[f] >= 'a' && a[f] <= 'z')
{
	a[f] -= 32;
}
	for (g = 0; g < 13; g++)
{
	if (a[f] == spe[g])
{
	if (a[f + 1] >= 'a' && a[f + 1] <= 'z')
{
	a[f + 1] -= 32;
}
}
}
}
	return (a);
}

