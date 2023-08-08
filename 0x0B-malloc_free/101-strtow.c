#include <stdlib.h>
#include "main.h"

/**
 * is_space - A helper function that checks words for spaces
 * @c: The string to check
 * Return: Nothing
 * This program conforms to the betty documentation style
 **/

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - A helper function that counts the number of words in a string
 * @str: The string to check
 * Return: Nothing
 * This program conforms to the betty documentation style
 **/

int count_words(char *str)
{
	int word_count;
	int in_word;

	word_count = 0;
	in_word = 0;
	while (*str)
{
	if (!is_space(*str))
{
	if (!in_word)
{
	in_word = 1;
	word_count++;
}
}
	else
{
	in_word = 0;
}
	str++;
}

	return (word_count);
}

/**
 * strdup_custom - A helper function that duplicates a string
 * @str: The string to duplicate
 * @len: The length of the string
 * Return: Nothing
 **/

char *strdup_custom(char *str, int len)
{
	int i;
char *new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str)
{
	for (i = 0; i < len; i++)
{
	new_str[i] = str[i];
}
	new_str[len] = '\0';
}
	return (new_str);
}

/**
 * strtow - A function that splits a string into words
 * @str: The string to check
 * Return: NULL if str == NULL or str == "" or NULL if it fails
 * This program conforms to the betty documentation style
 **/

char **strtow(char *str)
{
	int word_count;
	char **words;
	int index;
	int in_word;
	int word_len;

	if (str == NULL || *str == '\0')
{
	return (NULL);
}

	word_count = count_words(str);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
{
	return (NULL);
}

	index = 0;
	in_word = 0;
	word_len = 0;

	while (*str)
{
	if (!is_space(*str))
{
	if (!in_word)
{
	in_word = 1;
	word_len = 0;
}
	word_len++;
}
	else
{
	if (in_word)
{
	words[index++] = strdup_custom(str - word_len, word_len);
	in_word = 0;
}
}
	str++;
}

	if (in_word)
{
	words[index++] = strdup_custom(str - word_len, word_len);
}

	words[index] = NULL;

	return (words);
}
