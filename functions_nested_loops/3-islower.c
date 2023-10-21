#include "main.h"

/**
 * _islower(int c) - Function checks lowercase character
 * @c: is the char being checked
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
