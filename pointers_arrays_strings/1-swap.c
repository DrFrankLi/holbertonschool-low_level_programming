#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: int one
 * @b: int wto
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
