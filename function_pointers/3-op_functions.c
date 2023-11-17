#include <stddef.h>
#include "calc.h"

/**
 * op_add - sum of a and b
 * op_sub - differece of a and b
 * op_mul - product of a and b
 * op_div - division of a by b
 * op_mod - reminder of the division of a by b
 * @a: int
 * @b: int
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
}

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
}
