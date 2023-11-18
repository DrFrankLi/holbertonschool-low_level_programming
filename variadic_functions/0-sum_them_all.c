#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function to provide the sum of all param
 * @n: constant unsigned int
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		++i;
	}
	va_end(args);

	return (sum);
}
