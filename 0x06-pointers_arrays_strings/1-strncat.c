#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: character destination
 * @src: character src
 * @n: Length of int
 * Return: The pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest != '\0')
	dest++;

	while (n > 0 && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	n--;
}

	*dest = '\0';

	return (a);
}

