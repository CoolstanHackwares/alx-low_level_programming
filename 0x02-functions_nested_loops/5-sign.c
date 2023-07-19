nclude "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: The integer to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 * This function conforms to the betty documentation style.
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
		(n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
