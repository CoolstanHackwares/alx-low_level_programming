#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
