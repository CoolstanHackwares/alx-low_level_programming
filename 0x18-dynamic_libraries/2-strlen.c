#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: The pointer to the string.
 * Return: The length of the string.
 * This program conforms to the betty documentation style
 **/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}

	return (length);
}

