#include "main.h"

/**
 * jack_bauer - This program prints every minute of Jack Bauers day
 * starting from 00:00 to 23:59.
 * Return: 0 (Success)
 * This program conforms to the betty documentation style.
 **/

void jack_bauer(void)
	{
	int f, g;

	f = 0;
	while (f < 24)
	{
		g = 0;
		while (g < 60)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar('\n');
			g++;
		}
		f++;
	}
}
