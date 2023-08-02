#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * using recursion.
 * @s: The string to return its length
 * Return: The length of the string
 * This program conforms to the betty documentation style
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	return (1 + _strlen_recursion(s + 1));
}
