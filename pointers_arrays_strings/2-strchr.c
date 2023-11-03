#include "main.h"
#include <stdio.h>

/**
 * _strchar: locates a character in a string
 * @s: string of char
 * @c: char
 * Return: always 0 . A pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	char *s_ptr = s;
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = c;
		i++;
	}
	return (s_ptr);
}
