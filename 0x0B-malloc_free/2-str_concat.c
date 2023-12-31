#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";  /* Treat NULL as an empty string */
	if (s2 == NULL)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1);  /* +1 for null-terminator */

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

