#include <stdio.h>

/**
 * main - Putchar alphabet in lowercase wihtout e and q followed by \n
 * Return: Always 0 (Successs)
 */

int main(void)
{
	char n = 'a';

	while(n <= 'z')
	{
		if(n != 'q' && n != 'e')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


