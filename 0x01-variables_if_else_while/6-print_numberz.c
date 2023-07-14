#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'This program prints all single digit numbers of base 10
 * starting from 0, followed by a new line, using the putchar function'
 * Return: 0 (SUCCESSFUL)
 **/
int main(void)
{
	int n;

	for (n = 50; n < 60; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
