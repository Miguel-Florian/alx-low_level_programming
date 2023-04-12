#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strdup - returns a pointer to newly allocated space in memory
 * @str: string given as parameter
 * Return: NULL if str is null, or a pointer
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
