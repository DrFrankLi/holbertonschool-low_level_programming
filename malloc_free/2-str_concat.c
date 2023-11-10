#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	s1 = malloc(sizeof(*s1));
	s2 = malloc(sizeof(*s2));

	printf("%s %s\n", s1, s2);
	return (NULL);
	if (s1 == NULL || s2 == NULL)
	{
		printf("\n");
	}
}
