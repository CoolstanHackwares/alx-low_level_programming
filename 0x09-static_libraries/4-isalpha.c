#include "main.h"
/**
 * _isalpha - This function checks for an alphabetic character
 * @c: The character to check
 * Return: 1 if c is a letter, lowercase or uppercase,
 * 0 otherwise.
 * This function conforms to the betty documentation style
 **/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

