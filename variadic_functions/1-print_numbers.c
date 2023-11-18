#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers \n
 * @separator: const char, the string to be printed between num
 * @n: const unsigned int , num of int passed to func
 * Return: a new line at the end of func
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		++i;
	}
	va_end(args);

	printf("\n");
}
