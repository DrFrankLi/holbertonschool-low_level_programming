#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @size: the number of# hori + verti
 * Return: always 0
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			a++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
