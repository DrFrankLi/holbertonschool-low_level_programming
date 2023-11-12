#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array of nmemb of elements of size bytes each
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: a pointer to the allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
