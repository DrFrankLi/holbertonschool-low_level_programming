#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes func as parameter on each element
 * @array: array of int
 * @size: int array size
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
