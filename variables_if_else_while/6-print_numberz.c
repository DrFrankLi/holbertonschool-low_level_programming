#include <stdio.h>

/**
 * main - Putchar single digit smaller than 10 from 0,\n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n < 10)

	{
		putchar(n); 
		n++;
	}

	putchar('\n');
	return (0);
	}
