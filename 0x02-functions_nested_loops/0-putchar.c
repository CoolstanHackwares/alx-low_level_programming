#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry Point
 * Description: This program prints _putchar to the screen
 * followed by a new line
 * without using the printf and puts function.
 * This program conforms to the betty documentation style.
 * Return: 0 (SUCCESSFUL)
 **/

int main(void)
{
	char message[] = "_putchar\n";

	for (int a = 0; message[a] != '\0'; a++)
	{
	char c = message[a];

	write(1, &c, 1);
	}
	return (0);
}
