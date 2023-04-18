#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @s: string
*
* Return: int
*/
int _strlen(char *s)
{
		int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

		return (i);
}
/**
* _strcpy - copies the string from src to dest
* @dest: destination string
* @src: source string
*
* Return: pointer dest
*/
char *_strcpy(char *dest, char *src)
{
		int len, i;

		len = 0;

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
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: struct dog, NULL if not
*/

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *ptr_dog;

		ptr_dog = malloc(sizeof(dog_t));
		if (ptr_dog == NULL)
			return (NULL);

		ptr_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (ptr_dog->name == NULL)
		{
			free(ptr_dog);
			return (NULL);
		}
		ptr_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (ptr_dog->owner == NULL)
		{
			free(ptr_dog);
			free(ptr_dog->name);
			return (NULL);
		}
		ptr_dog->age = age;
		_strcpy(ptr_dog->name, name);
		_strcpy(ptr_dog->owner,owner);

		return (ptr_dog);
}
