#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a malloc with str copy
 * @str: string
 * Return: always 0
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(len + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
	free(duplicate);
}
