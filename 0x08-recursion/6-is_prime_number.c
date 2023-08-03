#include "main.h"

/**
 * actual_prime - a helper function that calculates
 * if a number is prime recursively
 * @n: The number to work on
 * @k: The iterator
 * Return: 1 if n is prime, 0 if not prime
 * This program conforms to the betty documentation style
 **/
int actual_prime(int n, int k)
{
	if (k == 1)
	return (1);
	if (n % k == 0 && k > 0)
	return (0);
	return (actual_prime(n, k - 1));
}

/**
 * is_prime_number - A function that checks if the input
 *integer is a prime number
 * @n: number to check
 * Return: 1 if the input integer is a prime number, 0 otherwise
 **/

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}
