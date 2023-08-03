#include "main.h"

/**
 * wildcmp - A function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 * This program conforms to the betty documentation style
 **/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	else if (*s1 == '\0' && *s2 == '*')
	return (wildcmp(s1, (s2 + 1)));
	else if (*s1 == '\0' || *s2 == '\0')
	return (0);
	if (*s1 == *s2)
	return (wildcmp((s1 + 1), (s2 + 1)));
	if (*s2 == '*')
{
	if (*(s2 + 1) == '*')
	return (wildcmp(s1, (s2 + 1)));
	else if (wildcmp(s1, s2 + 1))
	return (1);
	else
	return (wildcmp(s1 + 1, s2));
}
	return (0);
}
