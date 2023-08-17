#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * This program conforms to the betty documentation style
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	printf("%d", va_arg(args, int));

	if (a != n - 1 && separator != NULL)
{
	printf("%s", separator);
}
}
	printf("\n");
	va_end(args);
}

