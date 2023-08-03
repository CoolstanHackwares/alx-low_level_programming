#include "main.h"

/**
 * The function prototype for my_pal
 * @s: The string to check
 * @length: The length of the string
 * Return: 1 if s is a palindrome, 0 if not
 **/

int my_pal(char *s, int start, int end);

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: The characte array string
 * Return: 1 if palindrome, 0 if not
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

	return (my_pal(s, 0, length - 1));
}

/**
 * my_pal - A helper function that recursively checks for a palindrome
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if s is a palindrome, 0 if not
 **/

int my_pal(char *s, int start, int end)
{
	if (start >= end)
{
	return (1);
}
	else if (s[start] == s[end])
{
	return (my_pal(s, start + 1, end - 1));
}
	else
{
	return (0);
}
}

