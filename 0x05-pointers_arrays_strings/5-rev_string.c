#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to reverse
 * This program conforms to the betty documentation style
 **/

void rev_string(char *s)
{
	char temp;
	int a, length, length1;

	length = 0;
	length1 = 0;
	while (s[length] != '\0')
{
	length++;
}
	length1 = length - 1;
	for (a = 0; a < length / 2; a++)
{
	temp = s[a];
	s[a] = s[length1];
	s[length1--] = temp;
}
}

