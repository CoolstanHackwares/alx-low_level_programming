#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 * Return: The encoded string
 * This program conforms to the betty documentation style
 **/
char *leet(char *str)
{
	if (str == NULL)
{
	return (NULL);
}

	char *s = str;
	char leet_map[5][2] = {
	{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}
};

	for (; *s; s++)
{
	for (int i = 0; i < 5; i++)
{
	if (*s == leet_map[i][0] || *s == leet_map[i][0] - 32)
{
	*s = leet_map[i][1];
	break;
}
}
}

	return (str);
}

