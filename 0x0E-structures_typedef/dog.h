#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - information about a  struct dog
 */
typedef struct dog dog;
/**
 * dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
