#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dawg
 *
 * @d: pointer to the dawg
 *
 * Return: void & null
 */

void print_dog(struct dog *d)
{
	

	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", 0.0);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
