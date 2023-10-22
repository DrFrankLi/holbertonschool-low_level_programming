#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,\n
 * @n: the starting natural number
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	else
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
