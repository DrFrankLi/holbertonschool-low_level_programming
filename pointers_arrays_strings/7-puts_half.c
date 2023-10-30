#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, \n
 * @str: the pointer string to a char
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		if (i >= (len / 2))
		{
			putchar(str[i]);
			i++;
		}
		len++;
	}
	_putchar('\n');
}
