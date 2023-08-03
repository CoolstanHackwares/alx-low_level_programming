#include "main.h"

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: The character array string
 * Return: 1 if s is a palindrome, 0 if not
 **/
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;
	return (my_pal(s, --length));
}

/**
 * get_length - A function that gets the length of string
 * @s: The input string
 * Return: The length of the string
 **/

int get_length(char *s)
{
	if (*s == '\0')
	return (1);
	else
	return (1 + get_length(++s));
}

/**
 * my_pal - A helper function that checks for a palindrome recursively
 * @s: The string to check
 * @l: The length of the string
 * Return: 1 if s is a palindrome, 0 if not
 **/

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
{
	if (l <= 0)
	return (1);
	else
	return (my_pal(++s, l - 2));
}
	else
	return (0);
}
