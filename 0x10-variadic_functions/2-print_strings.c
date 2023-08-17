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
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
{
	str = va_arg(args, char *);
	if (str == NULL)
{
	printf("%s", "(nil)");
}
	else
{
	printf("%s", str);
}
	if (a < n - 1 && separator != NULL)
{
	printf("%s", separator);
}
}
	va_end(args);
	printf("\n");
}
