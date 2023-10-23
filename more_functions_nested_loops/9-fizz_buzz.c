#include <stdio.h>

/**
 * main - fizzbuzz 3, 5, 15,1-100,space
 * Return: always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("buzz ");
		}
		else if (n % 15 == 0)
		{
			printf("fizzbuzz ");
		}
		else
		{
			printf(" ");
		}
		n++;
	}
	return (0);
}
