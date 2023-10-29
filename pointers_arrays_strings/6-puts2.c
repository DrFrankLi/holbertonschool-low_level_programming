#include "main.h"
#include <stdio.h>

/**
 * puts2() - prints every other character of a string from the first ,\n
 * @str: the character variable string
 * Return: Always 0
 */

void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}
	_putchar('\n');
}
