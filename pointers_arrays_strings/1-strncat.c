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

	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	while (src[len_s] != '\0')
	{
		len_s++;
	}
	if (len_s <= n)
	{
		dest[len_d] = src[len_s];
		len_d++;
		len_s++;
	}
	else
	{
		dest[len_d] = src[n];
		len_d++;
		n++;
	}
	return (dest);
}
