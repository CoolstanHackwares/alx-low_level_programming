#include "main.h"

/**
 * times_table - This program prints the 9 times table, starting with 0.
 * Return: 0 (Success)
 * This program conforms to the betty documentation style.
 **/

void times_table(void)
{
	int z, a, q;

	for (z = 0; z < 10; z++)
	{
		for (a = 0; a < 10; a++)
		{
			q = a * z;
			if (a == 0)
			{
				_putchar(q + '0');
			}
			if (q < 10 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(q + '0');
			} else if (q >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((q / 10) + '0');
				_putchar((q % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
