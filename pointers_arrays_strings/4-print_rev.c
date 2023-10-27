#include "main.h"

/**
 * print_rev - prints a string in reverse, \n
 * @s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int length = 0;
	while (s[length] >= 0)
	{
		length++;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
