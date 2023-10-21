#include "main.h"

/**
 * jack_bauer - Function prints minutes of the day of JB 00:00 - 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
	int h;
	int m;

	while (h >= 0 && h < 24)
	{
		while (m >= 0 && m < 60)
		{
			_putchar (48 + m);
			m++;
		}
		_putchar (48 + h);
		h++;
	}
}
