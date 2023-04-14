#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocaotes memory using malloc
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
