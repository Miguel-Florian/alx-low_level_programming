#include "dog.h"
/**
 * init_dog - initialize a variable of type dog
 * @d: pointer to a structure of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d-> name = name;
	d-> age = age;
	d-> owner = owner;

}
