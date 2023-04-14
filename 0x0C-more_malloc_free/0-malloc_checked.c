#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - allocaotes memory using malloc
  * @b: parameter
  *
  *Return: no return
  */
void *malloc_checked(unsigned int b)
{
	char *array;
	
	array = malloc(b);
	
	if (array==NULL)
		exit(0);
	else
		return (array);
	/*printf((array == NULL) ? exit(0) : array);*/
}
