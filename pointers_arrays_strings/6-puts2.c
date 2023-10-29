#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string from the first ,\n
 * @str: the character variable string
 * Return: Always 0
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
