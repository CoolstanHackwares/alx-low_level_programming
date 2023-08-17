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
	int num = va_arg(args, int);

	printf("%d", num);

	if (separator != NULL && a < n - 1)
{
	printf("%s", separator);
}
}

	va_end(args);

	_putchar('\n');
}

