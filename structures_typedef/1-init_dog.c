#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise the dawg
 *
 * @d: pointer to the dawg
 * @name: pointer to the dawgs name
 * @age: pointer to the dawgs age
 * @owner: pointer to the dawgs owner
 *
 * Return: void pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
