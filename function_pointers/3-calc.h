#ifndef _CALC_H
#define _CALC_H
#include <stddef.h>

/**
 * struct op - struct op
 * @op: the opertator
 * @f: the function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}op_t;

int (*get_op_func(char *s))(int, int);


#endif
