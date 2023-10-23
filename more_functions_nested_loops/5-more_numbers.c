#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers 0-14, \n
 * Return: Always 0
 */

void more_numbers(void)
{
	char h = '0';
	char v = '0';

	while (v < 10)
	{
		while (h <= 14)
		{
			if (h > 9)
			{
				_putchar(h / 10);
			}
			_putchar(h % 10);
			h++;
		}
		_putchar('\n');
		v++;
	}
}
