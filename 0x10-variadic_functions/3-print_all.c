#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_char -  A function that prints a character
  * @separator: The character separator
  * @args: The list of arguments passed to the program
  * Return: Nothing
  * This program conforms to the betty documentation style
  **/

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_int - A function that  prints an integer type character
  * @separator: The character separator
  * @args: The list of arguments passed to the program
  * Return: Nothing
  * This program conforms to the betty documentation style
  **/

void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_float - PA function that prints a float type character
  * @separator: The character separator
  * @args: The list of arguments passed to the prrogram
  * Return: Nothing
  * This program conforms to the betty documentation style
  **/

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_char_ptr - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  * Return: Nothing
  */
void print_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
{
	printf("%s%s", separator, "(nil)");

}
	printf("%s%s", separator, arg);
}

/**
  * print_all - A function that prints anything according to a specified format
  * @format: The list of argument types passed to the function
  * This program conforms to the betty documentation style
  **/

void print_all(const char * const format, ...)
{
	va_list args;
	p_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_char_ptr }
	};
	unsigned int a = 0;
	unsigned int b = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[a])
{
	b = 0;
	while (b < 4)
{
	if (format[a] == *form_types[b].identifier)
{
	form_types[b].p(separator, args);
	separator = ", ";
}
	b++;
}
	a++;
}
	va_end(args);
	printf("\n");
}
