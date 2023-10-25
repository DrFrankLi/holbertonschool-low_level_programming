#include "main.h"

/**
 * print_rev - prints a string in reverse, \n
 * @s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	while ( *s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
