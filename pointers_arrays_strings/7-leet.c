#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: original string
 * Return: always 0
 */

char *leet(char *s)
{
	int i;
	int j;
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
