#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: a string pointer to char
 * @b: char
 * @n: unsigned int
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
