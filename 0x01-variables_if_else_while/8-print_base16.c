#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'This program prints all the numbers of base 16 in lowercase,
 * followed by a new line'
 * Return: 0 (SUCCESSFUL)
 **/
int main(void)
{
	int n;
	char ha;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ha = 'a'; ha <= 'f'; ha++)
	{
		putchar(ha);
	}
	putchar('\n');
	return (0);
}
