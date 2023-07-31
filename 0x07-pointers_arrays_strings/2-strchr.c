#include "main.h"

/**
 * _strchr - A function that Locates a character in a string
 * @s: A pointer to the String to work on
 * @c: The Character to look for in s
 * Return: A pointer to the first occurrence of the character c
 * in the string s or NULL if the character is not found
 * This program conforms to the betty documentation style
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
	return (s);
	s++;
}

	return ('\0');
}
