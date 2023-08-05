#include <stdio.h>

/**
 * main - A program that prints all the arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
{
	printf("%s\n", argv[a]);
}
	return (0);
}

