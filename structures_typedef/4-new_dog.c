#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog info with a copy of name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
