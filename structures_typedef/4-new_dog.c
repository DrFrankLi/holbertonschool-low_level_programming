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

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	strcpy(newdog->name, name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	strcpy(newdog->owner, owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
