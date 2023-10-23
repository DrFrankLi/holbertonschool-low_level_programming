#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the integer being tested
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	while ( c >= 'A' && c <= 'Z')
	{
		_putchar('0' + 1);
	}
	while ( c >= 'a' && c <= 'z')
	{
		_putchar('0' + 0);
	}
}
