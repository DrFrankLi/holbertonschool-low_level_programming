#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns x' value raised to ^y
 * @x: base int
 * @y: power int
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y));
}
