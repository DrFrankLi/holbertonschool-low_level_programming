#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct my_print - the header function to def
 * @c: char
 * @f: function pointer
 * Return: void
 */

typedef struct my_print
{
	char *c;
	void (*f)(va_list arg);
} my_print;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
