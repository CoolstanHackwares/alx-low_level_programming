#include <stdio.h>
#include <math.h>

/**
 * main - block of code
 * Description: Find and print the largest prime factor
 * of the number 612852475143
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
{
	if (num % a == 0)
{
	printf("%d\n", a);
	break;
}
}
	return (0);
}
