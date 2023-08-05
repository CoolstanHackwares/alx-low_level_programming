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

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	int result = x * y;

	printf("%d\n", result);

	return (0);
}
