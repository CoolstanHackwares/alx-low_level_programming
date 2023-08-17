#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of parameters.
 * This program conforms to the betty documentation style
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
	sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
