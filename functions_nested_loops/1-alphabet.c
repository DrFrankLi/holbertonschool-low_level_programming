#include "main.h"

/**
 * print_alphabet - _putchar lowercase alphabet,\n
 * Return: Void
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar (low);
		low++;
	}

	_putchar ('\n');
}
