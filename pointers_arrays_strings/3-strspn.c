#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer to char
 * @accept: string pointer to char
 * Return: always 0 . number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				len++;
				break;
			}
			a++;
		}
	if (*s == '\0')
	{
		break;
	}
	s++;
	}
	return (len);
}
