#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: ALways 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '-' && result == 0)
		{
			sign = sign * (-1);
		}	
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}
	return (sign * result);
}
