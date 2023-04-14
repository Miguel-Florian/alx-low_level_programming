#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of int.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, NbreElt;

	if (min > max)
		return (NULL);
	NbreElt = max - min + 1;
	array = malloc(sizeof(*array) * NbreElt);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(array + i) = min;

	return (array);
}
