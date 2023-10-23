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

	while (v <= 10)
	{
		while (h <= 14)
		{
			_putchar(h);
			h++;
		}
		v++;
	}
	_putchar('\n');
}
