#ifndef _MY_DOG_H
#define _MY_DOG_H

/**
 * struct dog - the dog struct
 *
 * @age: the dog's age
 * @name: the dog's name
 * @owner: the dog's owner
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
