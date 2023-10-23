#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a stright line in the terminal
 * @n: the number that _ should be printed and >0,\n
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
