#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;

	while (y < 10)
	{
		while (x < 10)
		{
			_putchar('0' + x * y);
			_putchar(',');
			x++;
		}
		y++;
		_putchar('\n');
	}
}
