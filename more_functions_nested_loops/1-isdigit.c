#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: is the int being tested
 * Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return ('0' + 1);
	}
	else
	{
		return (0);
	}
}
