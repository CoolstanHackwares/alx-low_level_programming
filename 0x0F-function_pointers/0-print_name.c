#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: The name to print
 * @f: a pointer to a function that takes a char as argument
 * and returns void.
 * This program conforms to the betty documentation style
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

