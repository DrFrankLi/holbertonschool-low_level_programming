#include <stdio.h>

/**
 * main - Putchar numbers less than 16, \n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= 16)
	{
		putchar('0'+n);
			n++;
	}

	putchar('\n');
	return (0);
}
