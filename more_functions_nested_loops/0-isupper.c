#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the integer being tested
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
