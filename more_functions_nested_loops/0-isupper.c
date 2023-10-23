#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: the integer being tested
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	int i;

	/* isupper takes a single argument, which is an integer representing a character.*/
       /*If the character is an uppercase letter, it returns a non-zero value,otherwise 0*/
	i = isupper(c);
	if (i == 0)
		return (0);
	else
		return (1);	
}
