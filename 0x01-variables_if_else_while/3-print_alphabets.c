#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'This program prints the alphabet in lowercase,
 * and then in uppercase,
 * followed by a new line'
 * Return: 0 (SUCCESSFUL)
 **/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
