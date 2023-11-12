#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char string
 * @s2: char string
 * @n: int
 * Return: pointer to a new space in mem contains s1+n*S2, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		result[len1 + j] = s2[j];
		j++;
	}
	result[len1 + n] = '\0';
	return (result);
}
