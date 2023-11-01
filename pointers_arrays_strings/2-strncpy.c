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
	int len_d = 0;
	int len_s = 0;

	while (len_s != '\0')
	{
		if (len_s <= n)
		{
			dest[len_d] = src[len_s];
			len_d++;
			len_s++;
		}
	}
	return (dest);
}
