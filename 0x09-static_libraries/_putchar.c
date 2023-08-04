#include "main.h"
#include <unistd.h>

/**
 * _putchar - This function writes a character to the standard output
 * @c: The characters to print
 * Return: 1 (Successful)
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

