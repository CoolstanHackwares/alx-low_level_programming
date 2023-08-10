#include "main.h"
#include <stdlib.h>

/**
 * str_length - A helper function that checks the length of a string
 * @s: The string to check
 * Return: The length of the string
 * This program conforms to the betty documentation style
 **/

int str_length(char *s)

{
	int l = 0;

	while (s && s[l])
	l++;
	return (l);
}

/**
 * string_nconcat - A function that concantenates two strings
 * @s1: The first string
 * @s2: The second string to append n bytes from to string one
 * @n: The number of bytes of s2 to append to s1
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated (SUCCESS) and NULL (FAILURE)
 * This program conforms to the betty documentation style
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1 = str_length(s1);
	int l2 = str_length(s2);

	if (n >= l2)
	n = l2;

char *concatenated = malloc(sizeof(char) * (l1 + n + 1));

	if (concatenated == NULL)
	return (NULL);

	int a, b;

	for (a = 0, a < l1; a++)
	concatenated[a] = s1[a];

	for (b = 0; b < n; b++)
	concatenated[a + b] = s2[b];

	concatenated[a + b] = '\0';

	return (concatenated);
}
