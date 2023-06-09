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
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
