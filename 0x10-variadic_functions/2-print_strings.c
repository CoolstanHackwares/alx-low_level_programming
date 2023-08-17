#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * This program conforms to the betty documentation style
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	const char *str = va_arg(args, const char*);

	printf("%s", str);

	if (a < n - 1 && separator != NULL)
{
	printf("%s", separator);
}
}
	printf("\n");
	va_end(args);
}
