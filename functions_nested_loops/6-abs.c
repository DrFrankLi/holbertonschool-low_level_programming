#include "main.h"

/**
 * _abs - computes the abolute value of an integer
 * @r: the int being tested
 * Return: absolute value of r
 */

int _abs(int r)
{
	if (r >= 0)
	{
		_putchar ('0'+r);
	}
	else
	{
		_putchar ('0'-r);
	}
}
