#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: The list of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * Any other char is ignored
 * This program conforms to the betty documentation style
 **/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int a = 0;
	char *str;
	char current_format;
	char *separator = "";

	va_start(args, format);

	while (format && format[a])
{
	current_format = format[a];

	switch (current_format)
{
	case 'c':
	printf("%s%c", separator, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", separator, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", separator, va_arg(args, double));
	break;
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	printf("%s%s", separator, "(nil)");
	else
	printf("%s%s", separator, str);
	break;
}

	separator = ", ";
	a++;
}

	va_end(args);
	printf("\n");
}

