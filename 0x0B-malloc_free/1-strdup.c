#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function which returns a pointer to a newly allocated
 * space in memory
 * @str: The string to be duplicated
 * Return: A pointer to the duplicated string, or NULL if str = NULL
 * or NULL if insufficient memory is available
 * This program conforms to the betty documentation style
 **/

char *_strdup(char *str)
{
	if (str == NULL)
{
	return (NULL);
}

	int length = 0;

	while (str[length] != '\0')
{
	length++;
}

char *duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
{
	return (NULL);
}
	int i;

	for (i = 0; i <= length; i++)
{
	duplicate[i] = str[i];
}

	return (duplicate);
}

