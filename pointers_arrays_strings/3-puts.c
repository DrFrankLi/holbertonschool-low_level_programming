#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a sting /n
 * @str: string
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
