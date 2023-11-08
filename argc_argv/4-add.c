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
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			char *arg = argv[i];
			int num = 0;
			int j = 0;

			while (arg[j] != '\0')
			{
				if (arg[j] >= '0' && arg[j] <= '9')
				{
					num = num * 10 + (arg[j] - '0');
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += num;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
