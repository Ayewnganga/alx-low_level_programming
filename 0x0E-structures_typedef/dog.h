#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure for Dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif