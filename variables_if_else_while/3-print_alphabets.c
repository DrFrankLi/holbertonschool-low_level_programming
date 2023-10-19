#include <stdio.h>

/**
 * main - Putchar alphabet in lowercase then in uppercase, followed by a new line
 * Return: Always 0 (Sucesscess)
 */

int main(void)
{
	char low = 'a';
	char upper = 'A';

	while (low <= 'z')
	{putchar(low);
		low++; }
	while (upper <= 'Z')
	{putchar(upper);
		upper++; }
	putchar('\n');
	return (0);
}

