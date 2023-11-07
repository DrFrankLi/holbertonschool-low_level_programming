#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -returns natural square root of int n
 * _sqrt_helper -helps to bridging two int into one
 * @n: int
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper -helps to bridging two int into one
 * @n: int
 * @r: int
 * Return: always 0
 */
int _sqrt_helper(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, r + 1));
}
