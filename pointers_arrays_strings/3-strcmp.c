#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings with their int value
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*s1 != 0 && *s2 != 0)
	{
		i = i*10 + (*s1 - '\0');
		j = j*10 + (*s2 - '\0');
		i++;
		j++;
	}
	if (i > j)
	{
		printf("-%d\n",i);
	}
	else if (i < j)
	{
		printf("%d\n",i);
	}
	else
	{
		printf("0");
	}
	return (0);
}	
