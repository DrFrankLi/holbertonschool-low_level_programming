#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length;
	int i;
	int j;
	char swap;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	j = 0;
	while (j < i)
	{
		swap = s[j];
		s[j] = s[i];
		s[i] = swap;
		j++;
		i--;
	}
}
