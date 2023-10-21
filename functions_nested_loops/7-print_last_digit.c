#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: the int being tested
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int n = (r % 10);

	if (n >= 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + n);
		return (-n);
	}
}
