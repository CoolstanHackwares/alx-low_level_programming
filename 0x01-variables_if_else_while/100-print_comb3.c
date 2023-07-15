#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'This program prints all the possible different
 * combinations of two digits'
 * Numbers must be separated by ,, followed by a space
 * Return: 0 (SUCCESSFUL)
 **/
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
