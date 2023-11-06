#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -returns natural square root of int n
 * @n: int
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n != r * r)
	{
		return (-1);
	}
	else if (r * r == n)
	{
		return (r);
	}
	return (0);
}
