#include <stdio.h>

/**
 * main - Putchar numbers less than 16, \n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char m = 'a';


	while (n <= 9)
	{
		putchar('0' + n);
			n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}
