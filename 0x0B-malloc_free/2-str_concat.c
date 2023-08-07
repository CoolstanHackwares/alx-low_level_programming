#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to a newly allocated space in memory,
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated. if NULL is passed, treat as an empty string.
 * also return NULL on failure.
 * This program conforms to the betty documentation style
 **/

char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	int i, j;
	char *c;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[length1] != '\0')
	length1++;

	while (s2[length2] != '\0')
	length2++;

	c = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (c == NULL)
	return (NULL);

	for (i = 0; i < length1; i++)
	c[i] = s1[i];

	for (j = 0; j <= length2; j++)
	c[i + j] = s2[j];

	return (c);
}

