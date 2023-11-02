#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: original string
 * Return: always 0
 */

char *cap_string(char *s)
{
	int i = 0;
	char *str;

	str = s;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
