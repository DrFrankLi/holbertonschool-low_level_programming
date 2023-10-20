#include <stdio.h>

/**
 * main - Putchar all possible cominations of signle-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n > 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
