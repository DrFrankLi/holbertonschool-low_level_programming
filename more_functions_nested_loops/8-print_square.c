#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * Return: always 0
 */

void print_square(int size)
{
	int a;

	if (size > 0)
	{
		a = 0;
		while ( a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('#');
		a++;
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
