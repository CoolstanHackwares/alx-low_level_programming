#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @a: The string to convert to uppercase
 * Return: The converted string
 * This program conforms to the betty documentation style
 **/

char *string_toupper(char *a)
{
	int k;

	for (k = 0; a[k] != '\0'; k++)
{
	if (a[k] >= 'a' && a[k] <= 'z')
{
	a[k] = a[k] - 32;
}
}
	return (a);
}
