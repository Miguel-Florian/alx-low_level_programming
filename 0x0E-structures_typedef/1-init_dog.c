#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type dog
 * @d: struct of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
