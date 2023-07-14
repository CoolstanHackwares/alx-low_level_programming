#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'This program prints alphabets in lowercase,
 * followed by a new line, and omits the alphabets q and e'
 * Return: 0 (SUCCESSFUL)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
