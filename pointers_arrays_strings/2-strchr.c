#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string of char
 * @c: char
 * Return: always 0 . A pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
