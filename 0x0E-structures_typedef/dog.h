#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - information about a  struct dog
 */
typedef struct dog dog;
/**
 * struct dog - struct of  dog
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
