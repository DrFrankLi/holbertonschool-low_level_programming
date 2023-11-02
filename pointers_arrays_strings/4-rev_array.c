#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: one integer string pointer
 * @n: source string that needs to be reserved
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int swap;

	while (i < n)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		i++;
		n--;
	}
}
