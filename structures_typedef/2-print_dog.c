#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: members of sturct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name:%-8s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age:%.6f\n", d->age);
	printf("Owner:%-8s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
