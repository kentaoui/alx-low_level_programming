#include <stdio.h>
#include "main.h"

/**
 * main- prints the number of arguments passed
 * @argc: number of commandline argumants.
 * @argv: pointer to an array of command line arguments
 * Return: 0-success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

