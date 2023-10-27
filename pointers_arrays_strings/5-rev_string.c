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
	while (*s != '\0')
	{
		length++;
		s++;
	}
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
