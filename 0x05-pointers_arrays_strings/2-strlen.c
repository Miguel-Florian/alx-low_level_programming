#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s+i) != '\0')
	{
		i = i+1;
	}
	return (i);
}
