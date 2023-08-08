#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: The input string to split
 * Return: Pointer to an array of strings (words), or NULL on failure
 * This program conforms to the betty documentation style
 **/

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
{
	return (NULL);
}

	int words_count = 0;
	int in_word = 0;
	char **words = NULL;
	char *word_start = NULL;

	for (char *c = str; *c != '\0'; c++)
{
	if (*c == ' ' || *c == '\t' || *c == '\n')
{
	if (in_word)
{
	in_word = 0;
	words_count++;
}
}
	else
{
	if (!in_word)
{
	in_word = 1;
	word_start = c;
}
}
}
	if (in_word)
{
	words_count++;
}
	if (words_count == 0)
{
	return (NULL);
}
words = (char **)malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
{
	return (NULL);
}

	in_word = 0;
	words_count = 0;
	for (char *c = str; *c != '\0'; c++)
{
	if (*c == ' ' || *c == '\t' || *c == '\n')
{
	if (in_word)
{
	in_word = 0;
	*c = '\0';
	words[words_count] = word_start;
	words_count++;
}
}
	else
{
	if (!in_word)
{
	in_word = 1;
	word_start = c;
}
}
}

	if (in_word)
{
	words[words_count] = word_start;
	words_count++;
}
	words[words_count] = NULL;

	return (words);
}

