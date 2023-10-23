#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the number 0-9 with no 2 and 4,\n
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int n = '0';

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(48 + n);
			n++;
		}
	}
	_putchar('\n');
}
