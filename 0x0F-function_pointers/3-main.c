#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that performs simple calculations
 * @argc: The argument count
 * @argv: The argument vector
 * Return: The output of the operation
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
	operator = get_op_func(argv[2]);
	if (!operator)
{
	printf("Error\n");
	exit(99);
}
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
