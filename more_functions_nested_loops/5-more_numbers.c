#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers 0-14, \n
 * Return: Always 0
 */

void more_numbers(void)
{
	char n = '0';

	while (n <= 14)
	{
		_putchar(n * 10);
		n++;
	}
	_putchar('\n');
}
