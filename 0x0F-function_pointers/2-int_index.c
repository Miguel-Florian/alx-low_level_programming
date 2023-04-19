#include "function_pointers.h"
/**
 * int_index - searches integer
 * @size: numbers of element in the array
 * @array: array of int
 * @cmp: pointer to function
 *
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	else
		for(i = 0; i < size; i++)
		{
			if (cmp(array[i]) != NULL)
			{
				return (i);
			}
		}
}
