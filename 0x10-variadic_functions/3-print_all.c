#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - A function that prints a char argument.
 * @args: The va_list containing the argument.
 * This program conforms to the betty documentation style
 **/

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - A function that prints an int argument.
 * @args: The va_list containing the argument.
 * This program conforms to the betty documentation style
 **/

void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_float - A function that prints a float argument.
 * @args: The va_list containing the argument.
 * This program conforms to the betty documentation style
 **/

void print_float(va_list args)
{
	double f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_string - A function that prints a string argument.
 * @args: The va_list containing the argument.
 * This program conforms to the betty documentation style
 **/

void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
}

/**
 * print_all - A function that print anything based on a format string.
 * @format: The format string containing argument types.
 * c: char
 * i: integer
 * f: float
 * s: string (if NULL, print "(nil)")
 * Any other character is ignored.
 * ...: The arguments to be printed.
 * This program conforms to the betty documentation style
 **/

void print_all(const char * const format, ...)
{
	void (*print_functions[4])(va_list);
	const char *format_ptr = format;
	va_list args;

	print_functions[0] = print_char;
	print_functions[1] = print_int;
	print_functions[2] = print_float;
	print_functions[3] = print_string;

	va_start(args, format);

	while (*format_ptr)
{
	if (*format_ptr == 'c')
	print_functions[0](args);
	else if (*format_ptr == 'i')
	print_functions[1](args);
	else if (*format_ptr == 'f')
	print_functions[2](args);
	else if (*format_ptr == 's')
	print_functions[3](args);

	format_ptr++;
	if (*format_ptr)
	printf(", ");
}

	va_end(args);

	printf("\n");
}
