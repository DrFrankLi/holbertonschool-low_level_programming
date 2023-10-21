#include "main.h"

/**
 * print_alphabet_x10 - _putchar lowercase alphabet 10 times, \n
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = '0';
	char m = 'a';

	while (n < 10)
	{
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
