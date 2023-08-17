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
	int a = 0;
	char *str;
	char current_format;

	va_start(args, format);

	while (format && format[a])
{
	current_format = format[a];

	switch (current_format)
{
	case 'c':
	printf("%c", va_arg(args, int));
	break;
	case 'i':
	printf("%d", va_arg(args, int));
	break;
	case 'f':
	printf("%f", va_arg(args, double));
	break;
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	break;
}

	if ((format[a + 1] != '\0') &&
	(current_format == 'c' || current_format == 'i' ||
	current_format == 'f' || current_format == 's'))
	printf(", ");

	a++;
}

	va_end(args);
	printf("\n");
}
