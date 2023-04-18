#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print information about a dog struct
 * @d: struct of dog
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("Name: %s\n Age: %f\n",d->name,d->age);
		}
		else
		{
			printf("Name : %s\n Age: %f\n",d->name,d->age);
		}
		if(d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Owner: %s\n",d->owner);
		}
		else
			printf("Owner: %s\n",d->owner);
	}
}
