#include "main.h"

/**
 * _strstr - A function to Locate a substring
 * @haystack: The pointer to the string to search for
 * @needle: The pointer to the substring to find
 * Return: Pointer to the first occurrence of the substring in haystack,
 * or NULL if the substring is not found
 * This program conforms to the betty documentation style
 **/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
{
	return (haystack);
}

	while (*haystack)
{
	char *h = haystack;
	char *n = needle;

	while (*n && (*h == *n))
{
	h++;
	n++;
}

	if (*n == '\0')
{
	return (haystack);
}

	haystack++;
}

	return ('\0');
}

