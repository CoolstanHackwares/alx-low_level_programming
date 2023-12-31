#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func -A program that selects the correct function to perform
 * on an operation asked by the user
 * @s: The character operator passed as argument to the program
 * Return: A pointer to the function that corresponds to the operator
 * given as a parameter and if s does not match any of the 5
 * operators, return NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	i++;
}
	return (0);
}
