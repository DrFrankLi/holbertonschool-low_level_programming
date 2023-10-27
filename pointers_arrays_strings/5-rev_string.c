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

	/*calculates the length of the string by iterating through the characters until it finds the null terminator '\0' */
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	/* printing the reverse version of string*/
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
