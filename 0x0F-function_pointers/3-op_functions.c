#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - A function that adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 * This program conforms to the betty documentation style
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction of b from a
 * This program conforms to the betty documentation style
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the multiplication of a and b
 * This program conforms to the betty documentation style
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divides two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division of a by b
 * This program conforms to the betty documentation style
 **/

int op_div(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a / b);
}


/**
 * op_mod - A function that produces the result of the remainder
 * of the division of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the remainder of the division of a by b
 * This program conforms to the betty documentation style
 **/

int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a % b);
}


