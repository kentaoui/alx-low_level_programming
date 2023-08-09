#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - duplicates the input string to a new memory space location
 * @str: input string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	strcpy(a, str);

	return (a);
}
