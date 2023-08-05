#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: The number of arguments
 * @argv: Th array of arguments
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

