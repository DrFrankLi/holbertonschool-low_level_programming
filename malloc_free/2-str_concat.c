#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * string_len - function to calculate the length of a string
 * @str: string
 * Return: always 0. length of string
 */

int string_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *new_str;
	int index;
	int index_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = string_len(s1);
	len_s2 = string_len(s2);
	new_str = malloc(len_s1 + len_s2 + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < len_s1)
	{
		new_str[index] = s1[index];
		index++;
	}
	index_s2 = 0;
	while (index_s2 < len_s2)
	{
		new_str[index] = s2[index_s2];
		index++;
		index_s2++;
	}
	new_str[index] = '\0';
	return (new_str);
	free(new_str);
}
