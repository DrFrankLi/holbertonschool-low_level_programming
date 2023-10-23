#include <stdio.h>

/**
 * main - print numbers 1-100 fizz for 3* buzz for 5* fizzbuzz for 15*
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	if (n % 3 == 0)
	{
		putchar('F');
		putchar('i');
		putchar('z');
		putchar('z');
		putchar(' ');
	}
	else if (n % 5 == 0)
	{
		putchar('B');
		putchar('u');
		putchar('z');
		putchar('z');
		putchar(' ');
	}
	else if (n % 15 == 0)
	{
		putchar('F');
		putchar('i');
		putchar('z');
		putchar('z');
		putchar('B');
		putchar('u');
		putchar('z');
		putchar('z');
		putchar(' ');
	}
	else
	{
		putchar('0' + n);
		putchar(' ');
	}
	return (0);
}
