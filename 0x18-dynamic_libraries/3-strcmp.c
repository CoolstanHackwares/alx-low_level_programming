#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if both strings are equal.
 * A negative value if the first character that does not match,
 * has a lowervalue in s1 than in s2.
 * A positive value if the first character that does not match,
 * has a higher value in s1 than in s2.
 * This program conforms to the betty documentation style
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
{
	if (*s1 != *s2)
	return (*s1 - *s2);

	s1++;
	s2++;
}

	if (*s1 == '\0' && *s2 == '\0')
	return (0);
	else if (*s1 == '\0')
	return (-(*s2));
	else
	return (*s1);
}
