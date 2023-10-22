#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (x * y < 10)
			{
				_putchar(' ');
				_putchar('0' + x * y);
				_putchar(',');
				_putchar(' ');
				x++;
			}
			else
			{
				_putchar('0' + x * y / 10);
				_putchar('0' + x * y % 10);
				_putchar(',');
				_putchar(' ');
				x++;
			}
		}
		y++;
		_putchar('\n');
	}
}
