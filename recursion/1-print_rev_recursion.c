#include "main.h"
#include <stdio.h>

/**
 * _print_re_recursion - prints a string in reverse
 * @s: string
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_print_rev_recursion(s - 1);
}
