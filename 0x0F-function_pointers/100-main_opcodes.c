#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function.
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 1 on incorrect arguments, 2 on negative bytes
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int num_of_bytes, a;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
{
	printf("Error\n");
	return (2);
}

unsigned char *main_ptr = (unsigned char *)main;

	for (a = 0; a < num_of_bytes; a++)
{
	printf("%02x", main_ptr[a]);
	if (a != num_of_bytes - 1)
	printf(" ");
}
	printf("\n");

	return (0);
}

