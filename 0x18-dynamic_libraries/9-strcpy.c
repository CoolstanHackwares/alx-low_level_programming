#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: The pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: The pointer to dest
 * This program conforms to the betty documentation style
 **/

char *_strcpy(char *dest, char *src)
{
	int l, a;

	l = 0;
	while (src[l] != '\0')
{
	l++;
}
	for (a = 0; a < l; a++)
{
	dest[a] = src[a];
}
	dest[a] = '\0';
	return (dest);
}
