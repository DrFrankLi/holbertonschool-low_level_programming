#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination char pointer
 * @src: source char pointer
 * @n: integer number of array copied from src
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int actual_len = 0;

	while (actual_len < n)
	{
		if (src[n] != '\0')
		{
			dest[actual_len] = src[n];
			actual_len++;
			n++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
