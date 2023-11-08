#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counts of arguments
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	i = 1;
	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}
	if (sum == 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[i]) < 0 || atoi(argv[i]) > 9)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
