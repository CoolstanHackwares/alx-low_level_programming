#include "main.h"
/**
 * _islower - This function checks for a lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise.
 * This function conforms to the betty documentation style
 **/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
