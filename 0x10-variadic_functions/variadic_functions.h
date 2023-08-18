#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);

/**
 * struct format_types - The format_types of the struct
 * @identifier: The specifier used in the conversion
 * @p: The pointer to the function being called
 **/

typedef struct format_types
{
	char *identifier;
	void (*p)(char *separator, va_list args);
} p_dt;

#endif
