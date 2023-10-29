#include "main.h"

/**
 * puts_half - prints half of a string, \n
 * @str: the pointer string to a char
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] % 2 == 1)
		{
			_putchar(str[len - 1] / 2);
			len++;
		}
		else
		{
			_putchar(str[len] / 2);
			len++;
		}
		len++;
	}
	_putchar('\n');
}
