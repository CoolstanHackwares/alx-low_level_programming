#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'This program prints the lowercase alphabets in reverse,
 * followed by a new line'
 * Return: 0 (SUCCESSFUL)
 **/
int main(void)
{
	char ha;

	for (ha = 'z'; ha >= 'a'; ha--)
	{
		putchar(ha);
	}
	putchar('\n');
	return (0);
}
