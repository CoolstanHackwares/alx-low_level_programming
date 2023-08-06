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
	int cents, num_coins, coin_count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}
	cents = atoi(argv[1]);

	if (cents < 0)
{
	printf("0\n");
	return (0);
}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	coin_count = 0;

	for (i = 0; i < num_coins; i++)
{
	coin_count += cents / coins[i];
	cents %= coins[i];
}

	printf("%d\n", coin_count);
	return (0);
}
