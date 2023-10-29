#include "main.h"

/**
 * puts_half - prints half of a string, \n
 * @str: the pointer string to a char
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len])
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (str[len] % 2 == 1)
		{
			_putchar(str[i - 1] / 2);
			i--;
		}
		else
		{
			_putchar(str[i] / 2);
			i--;
		}
	}
	_putchar('\n');
}
