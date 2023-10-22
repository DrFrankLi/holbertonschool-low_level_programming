#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,\n
 * @n: the starting natural number
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d",n);
			if (n >= 99)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		while (n < 98)
		{
			printf("%d",n);
			if (n <= 97)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
	}
}
