#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: size allocates in memory
 * @c: char
 * Return: NULL if size = 0, else a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(size * sizeof(char));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}
