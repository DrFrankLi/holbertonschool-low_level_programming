#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings \n
 * @separator: string to be printed
 * @n: number of strings
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		++i;
	}
	va_end(args);
	printf("\n");
}
