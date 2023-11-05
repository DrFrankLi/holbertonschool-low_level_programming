#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of int
 * @a: row number
 * @size: column number
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int row_sum = 0;
	int col_sum = 0;
	int i = 0;

	while (i < size)
	{
		row_sum += a[i * size + i];
		col_sum += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", row_sum, col_sum);
}
