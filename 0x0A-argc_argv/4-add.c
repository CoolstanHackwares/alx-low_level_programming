#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The argument count
 * @argv: The array of arguments
 * Return: 0 if no number is passed
 * but if one of the number contains symbols that are
 * not digits, print Error and return 1
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int num, a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
{
	for (b = 0; argv[a][b] != '\0'; b++)
{
	if (!isdigit(argv[a][b]))
{
	puts("Error");
	return (1);
}
}

	num = atoi(argv[a]);

	if (num >= 0)
{
	sum += num;
}
}

	printf("%d\n", sum);
	return (0);
}

