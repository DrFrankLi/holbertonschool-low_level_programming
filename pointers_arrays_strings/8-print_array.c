#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array, \n
 * @n: the number of elements of the array
 * @a: an int pointer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;
	n = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	return;
}
