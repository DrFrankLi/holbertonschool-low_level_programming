#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
