#include "main.h"
#include <stdio.h>

/**
 * factorial - as its name. n*(n-1)!
 * @n: an int
 * Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n  * factorial(n - 1));
	}
}
