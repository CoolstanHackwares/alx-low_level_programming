#include "main.h"

/**
 ** find_sqrt - A helper function to find the natural square root of a number.
 ** @n: The number to find the square root of.
 ** @a: The starting value of the search range.
 ** @z: The ending value of the search range.
 ** Return: The square root of the number if found, otherwise -1.
 **/

int find_sqrt(int n, int a, int z)
{
	int h = (a + z) / 2;

	if (a <= z)
{
	int square = h * h;

	if (square == n)
{
	return h;
}
	else if (square > n)
{
	return find_sqrt(n, a, h - 1);
}
	else
{
	return find_sqrt(n, h + 1, z);
}
}

	return (-1);
}

/**
 ** _sqrt_recursion - A function that returns the natural square root of a number.
 ** @n: The number to find the square root of.
 ** Return: -1 if n does not have a natural square root.
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n == 0 || n == 1)
{
	return (n);
}
	else
{
	return find_sqrt(n, 1, n / 2);
}
}
