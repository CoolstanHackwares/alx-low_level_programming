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
	int length = 0;
	int i;
	char *duplicate;

	if (str == NULL)
{
	return (NULL);
}

	while (str[length] != '\0')
{
	length++;
}

duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
{
	return (NULL);
}
	for (i = 0; i <= length; i++)
{
	duplicate[i] = str[i];
}

	return (duplicate);
}

