#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array, \n
 * @n: the number of elements of the array
 * @a: an int pointer
 * Return: Always 0
 */

void print_array(int *a,int n)
{
	n = 0;

	while (n >= 0)
	{
		printf("%d, ", a[n]);
		n++;
	}
	return;
}
