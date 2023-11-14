#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees all dog allocated memories
 * @d: collection of elements of dogs
 * Return: freed memory
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
