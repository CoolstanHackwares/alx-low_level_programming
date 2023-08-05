#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 if it recieves two arguments else Error
 * followed by a new line and return 1
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	if (argc < 3)
{
	printf("Error\n");
	return (1);
}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
