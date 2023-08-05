#include "main.h"

#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 * if renamed, the program will print the new name without having to recompile
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *progName = argv[0];

	printf("%s\n", progName);
	return (0);
}
