#include "main.h"

/**
 * print_alphabet_x10 - _putchar lowercase alphabet 10 times, \n
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('abcdefghijklmnopqrstuvwxyz');
		n++;
	}
	_putchar ('\n');
}
