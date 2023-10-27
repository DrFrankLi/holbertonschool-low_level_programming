#include "main.h"

/**
 * print_rev - prints a string in reverse, \n
 * @s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] >= 0)
	{
		length++;
	}
	
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		s--;
	}
	_putchar('\n');
}
