#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle,\n
 * @size: size of the triangle with #,if <=0,\n
 * Return: Always 0
 */

void print_triangle(int size)
{
	int h;
	int v;

	if (size > 0)
	{
		v = 1;
		while (v < size)
		{
			h = 1;
			while (h < size)
			{
				_putchar(' ');
				h++;
				_putchar('#');
				_putchar('\n');
			}
			_putchar(' ');
			_putchar('#');
			h++;
		}
	}
	else
	{
		_putchar('\n');
	}
	return;
}
