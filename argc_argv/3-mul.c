#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: counts of arguments
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	i = 1;
	while (i < argc)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
