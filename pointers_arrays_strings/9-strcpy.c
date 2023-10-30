#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the tring pointed to by src with null to finish
 * @dest: destition pointer char
 * @src: source pointer char
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
