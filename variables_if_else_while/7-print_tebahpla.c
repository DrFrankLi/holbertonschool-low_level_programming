#include <stdio.h>

/**
 * main - Putchar lowercase alphabet in reverse,\n
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar (n);
		n--;
	}
	putchar('\n');
	return (0);
}
