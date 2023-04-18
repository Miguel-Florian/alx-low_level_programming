#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

/**
 * struct dog - struct whose stores  information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
