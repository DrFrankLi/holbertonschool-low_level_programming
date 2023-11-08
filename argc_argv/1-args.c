#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the number of arguments passed into it \n
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("argc = %d\n", argc);
	return (0);
}
