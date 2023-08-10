#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print sum of 2 numbers.
 * @argc: numbers of commandline arguments.
 * @argv: pointer to an array of command line arguments.
 * Return: 0-success
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
