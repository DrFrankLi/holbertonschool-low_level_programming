#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the integer being tested
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	/* isupper takes a single argument, which is an integer representing a character.*/
       /*If the character is an uppercase letter, it returns a non-zero value,otherwise 0*/
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);


}
