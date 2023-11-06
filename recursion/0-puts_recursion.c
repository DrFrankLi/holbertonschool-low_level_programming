#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string \n
 * @s: string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
}
