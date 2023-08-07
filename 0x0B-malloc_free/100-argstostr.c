#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguments of a program
 * @ac: The number of arguments
 * @av: The array of arguments
 * Return: NULL if ac == 0 or av == NULL, a pointer to the concatenated
 * string or NULL if it fails
 * This program conforms to the betty documentation style
 **/

char *argstostr(int ac, char **av)
{
	int a;
	int total_length = 0;
	char *arg;
	char *current;

	if (ac == 0 || av == NULL)
{
	return (NULL);
}
	for (a = 0; a < ac; a++)
{
	arg = av[a];

	while (*arg)
{
	total_length++;
	arg++;
}
	total_length++;
}
char *result = (char *)malloc(total_length + 1);
	if (result == NULL)
{
	return (NULL);
}
	current = result;
	for (a = 0; a < ac; a++)
{
	arg = av[a];
	while (*arg)
{
	*current = *arg;
	current++;
	arg++;
}
	*current = '\n';
	current++;
}
	*current = '\0';
	return (result);
}
