#include "main.h"

/**
 * jack_bauer - Function prints minutes of the day of JB 00:00 - 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h >= 0 && h < 24)
	{
		m = 0;
		while (m >= 0 && m < 60)
		{
			if (m >= 0 && m <=9)
			{
				_putchar ('0');
				_putchar (48 + m);
				m++;
			}
			else
			{
				_putchar (48 + m);
				m++;
			}

		}
		_putchar (48 + h);
		h++;
	}
}
