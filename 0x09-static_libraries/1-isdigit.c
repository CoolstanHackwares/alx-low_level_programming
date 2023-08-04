#include "main.h"

/**
 * _isdigit - A program that checks for a digit (0 through 9)
 * @c: The int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 * This program conforms to the betty documentation style
 **/

int _isdigit(int c)

{
	return (c >= '0' && c <= '9');
}

