#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives one per line \n
 * @argc: argument counts
 * @argv: vector to arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
