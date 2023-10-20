#include <stdio.h>

/**
 * main - Function prints single digit numbers smaller than 10 from 0, \n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar ('\n');

	return (0);
}
