#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length;
	int i;

	length = 0;
	while (length != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	i = length - 1;
	{
		_putchar(s[i]);
		i--;
	}
}
