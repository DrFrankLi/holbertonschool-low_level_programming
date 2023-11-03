#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination char pointer
 * @src: source char pointer
 * @n: unsigned int,number of bytes copied from src
 * Return: always 0, a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d_ptr = dest;
	char *s_ptr = src;

	while (n > 0)
	{
		*d_ptr = *s_ptr;
		d_ptr++;
		s_ptr++;
		n--;
	}
	return (dest);
}
