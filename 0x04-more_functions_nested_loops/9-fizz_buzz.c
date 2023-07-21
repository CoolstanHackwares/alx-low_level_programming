#include <stdio.h>

/**
 * main - A program that prints the numbers 1 to 100,
 * followed by a new line
 * but for multiples of 3 print Fizz and Buzz for multiples of 5
 * FizzBuzz is printed for numbers which are multiples of both 3 and 5
 * Return: 0 (Successful)
 * This program conforms to the betty documentation style
 **/

int main(void)

{
	int a;

	for (a = 1; a <= 100; a++)
{
	if (a % 3 == 0 && a % 5 == 0)
{
	printf("FizzBuzz");
}
	else if (a % 3 == 0)
{
	printf("Fizz");
}
	else if (a % 5 == 0)
{
	printf("Buzz");
}
	else
{
	printf("%d", a);
}
	if (a != 100)
{
	printf(" ");
}
}
	printf("\n");
	return (0);
}
