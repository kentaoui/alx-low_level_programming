#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int cntre;

	for (cntre = 0; *s != '\0'; s++)
		++cntre;

	return (cntre);
}
