#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: original string
 * Return: always 0
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' '
				|| s[i] == '\t'
				|| s[i] == '\n'
				|| s[i] == ','
				|| s[i] == ';'
				|| s[i] == '.'
				|| s[i] == '!'
				|| s[i] == '?'
				|| s[i] == '"'
				|| s[i] == '('
				|| s[i] == ')'
				|| s[i] == '{'
				|| s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		else
		{
			i++;
		}
	}
	return (s);
}
