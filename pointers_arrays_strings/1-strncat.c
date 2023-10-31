#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination char pointer
 * @src: source char pointer
 * @n: integer
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d;
	int len_s;
	int i;

	len_d = 0;
	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	len_s = 0;
	while (src[len_s] != '\0')
	{
		len_s++;
	}
	if (len_s < n)
	{
		n = len_s;
	}
	i = 0;
	while (i < n)
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (dest);
}
