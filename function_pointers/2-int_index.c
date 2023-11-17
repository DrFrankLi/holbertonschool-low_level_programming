#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: array being searched
 * @size: size of array
 * @cmp: function being used
 * Return: the index of the first element if comp not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
