#include <stdio.h>
/**
 * main - Entry point
 * Description:'This program prints all the possible combinations
 * of single-digit numbers'
 * Return: 0 (SUCCESSFUL)
 **/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
