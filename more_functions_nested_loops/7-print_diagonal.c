#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times \ is printed,if n <= 0,\n
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
