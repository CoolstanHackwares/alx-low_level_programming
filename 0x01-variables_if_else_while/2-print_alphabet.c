#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'This Program prints an alphabet in lowercase letters,
 * followed by a new line'
 * Return: 0 (SUCCESSFUL)
 **/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
