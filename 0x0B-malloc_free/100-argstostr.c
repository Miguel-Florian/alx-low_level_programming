#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  function that concatenates all the arguments
 * @ac: argument
 * @av: argument
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int index;
	int j, i;
	int total_len;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* calculate total length of all arguments*/
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_len++;
		}
		total_len++;  /* add 1 for '\n'*/
	}
	total_len++;
	/* allocate memory for concatenated string*/
	result = malloc(total_len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	/* concatenate arguments into result string*/
	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}
	result[index] =  '\0';
	return (result);
}
