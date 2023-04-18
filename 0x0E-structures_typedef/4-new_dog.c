#include "dog.h"
#include <stdlib.h>
/**
* wordCount - returns the length of a string
* @s: string
*
* Return: the length of the string
*/

int wordCount(char *s)
{
		int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

		return (i);
}

/**
* stringCopy - copies the string pointed to by src
* @dest: pointer of string
* @src: pointer of string
*
* Return: pointer dest
*/
char *stringCopy(char *dest, char *src)
{
		int len = 0, i

		while (src[len] != '\0')
		{
			len++;
		}

		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';

		return (dest);
}
/**
 * new_dog - creates new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of dog
 *
 * Return: dog struct or null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	
	ptr_dog = malloc(sizeof(dog_t));
	
	if(ptr_dog == NULL || name == NULL ||  owner == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = malloc((wordCount(owner) + 1) * sizeof(char));
	ptr_dog->name = malloc((wordCount(name) + 1) * sizeof(char));
	
	if(ptr_dog->name == NULL || ptr_dog->owner == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->age = age;
	stringCopy(ptr_dog->name, name);
	stringCopy(ptr_dog->owner, owner);
	
	return(ptr_dog);
}
