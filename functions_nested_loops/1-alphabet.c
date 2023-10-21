#include "main.h"

/**
 * main -_putchar lowercase alphabet,\n
 * Return: void
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
