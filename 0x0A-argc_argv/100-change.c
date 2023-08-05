#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 1 if the number of arguments passed to your program is
 * not exactly 1, print Error and return 1
 * if the number passed as argument is negative, print 0
 * This program conforms to the betty documentation style
 **/

int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, pennies, total_coins;

	if (argc != 2)
{
	puts("Error");
	return (1);
}

	cents = atoi(argv[1]);

	if (cents < 0)
{
	printf("0\n");
	return (0);
}

	quarters = cents / 25;
	dimes = (cents % 25) / 10;
	nickels = ((cents % 25) % 10) / 5;
	pennies = ((cents % 25) % 10) % 5;

	total_coins = quarters + dimes + nickels + pennies;

	printf("%d\n", total_coins);
	return (0);
}
