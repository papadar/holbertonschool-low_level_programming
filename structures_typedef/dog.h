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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
