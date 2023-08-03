#include "main.h"

/**
 * my_pal - a helper function that recursively checks for a palindrome
 * @s: The string to work on
 * @length: The length of string
 * Return: 1 if s is a palindrome, 0 if not
 **/

int my_pal(char *s, int length);

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: character array string
 * Return: 1 if s is a palindrome, 0 if not
 **/
int is_palindrome(char *s)
{
	int length = 0;
	char *temp = s;

	while (*temp != '\0')
{
	length++;
	temp++;
}

	return (my_pal(s, length - 1));
}

/**
 * my_pal - a helper function that recursively checks for a palindrome
 * @s: The string to work on
 * @length: The length of string
 * Return: 1 if s is a palindrome, 0 if not
 **/
int my_pal(char *s, int length)
{
	if (*s == *(s + length))
{
	if (length <= 0)
	return (1);
	else
	return (my_pal(s + 1, length - 2));
}
	else
	return (0);
}

