#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name \n
 * @argc: the counts of the arguments
 * @argv: the vector of the arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
