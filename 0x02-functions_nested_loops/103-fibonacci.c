#include <stdio.h>
/**
 * main - This program finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0 (SUCCESSFUL)
 * This program conforms to the betty documentation style
 **/
int main(void)
{
	int a;
	unsigned long int b, c, next, sum;

	b = 1;
	c = 2;
	sum = 0;
	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + c;
		b = c;
		c = next;
	}
	printf("%lu\n", sum);
	return (0);
}
