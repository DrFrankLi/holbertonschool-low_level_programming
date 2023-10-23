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

	if (size > 0)
	{
		a = 0;
		while (size < a)
		{
			_putchar('#');
			size++;
			_putchar('\n');
		}
		_putchar('#');
		a++;
	}
	else
	{
		_putchar('\n');
	}
}
