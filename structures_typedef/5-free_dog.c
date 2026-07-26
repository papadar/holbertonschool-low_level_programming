#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dawg
 *
 * @d: pointer to the dawg
 *
 * Return: void / nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
