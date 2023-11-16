#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: value of char pointer
 * @(*f): pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
