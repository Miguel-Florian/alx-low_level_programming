#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strdup - returns a pointer to newly allocated space in memory
 * @str: string given as parameter
 * Return: NULL if str is null, or a pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	ptr = malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL || ptr == NULL)
	{
		printf("insufficient memory was available");
		return (NULL);
	}

	strcpy(ptr,str);
	
	return (ptr);
