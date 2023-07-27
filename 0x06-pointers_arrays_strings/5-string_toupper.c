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
	if (a == ())
{
	return ();
}

	char *s = a;

	while (*s)
{
	if (*s >= 'a' && *s <= 'z')
{
	*s = *s - ('a' - 'A');
}
	s++;
}

	return (a);
}

