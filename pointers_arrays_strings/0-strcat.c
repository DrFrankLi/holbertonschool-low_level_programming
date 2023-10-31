#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int len_d = 0;
	int len_s = 0;

	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	while (src[len_s] != '\0')
	{
		dest[len_d] = src[len_s];
		len_s++;
		len_d++;
	}
	dest[len_d] = '\0';
	return (dest);
}
