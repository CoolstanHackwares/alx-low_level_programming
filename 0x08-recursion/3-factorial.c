#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: The given number
 * Return: -1 if n is less than 0 to indicate an error
 * This program conforms to the betty documentation style
 **/

int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n <= 1)
{
	return (1);
}
	else
{
	return (n * factorial(n - 1));
}
}
