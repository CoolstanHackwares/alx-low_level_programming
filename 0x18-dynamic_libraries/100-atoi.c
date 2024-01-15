#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: The string to be converted
 * Return: the int converted from the string
 * This program conforms to the betty documentation style
 **/

int _atoi(char *s)
{
	int a, b, n, x;

	a = n = 0;
	x = 1;
	while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
{
	if (s[a] == '-')
	x *= -1;
	a++;
}
	b = a;
	while ((s[b] >= '0') && (s[b] <= '9'))
{
	n = (n * 10) + x * ((s[b]) - '0');
	b++;
}
	return (n);
}
