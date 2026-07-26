#include <stdlib.h>
#include "dog.h"

/**
 * strLen - find the string length
 *
 * @ptr: recevied pointer to a string begin
 *
 * Return: the length of string, or 0 if no string
 */

int strLen(char *ptr)
{
	int count;

	count = 0;
	if (ptr)
	{
		while (ptr[count] != '\0')
			count++;
		return (count);
	}
	else
		return (0);
}

/**
 * new_dog - create a dawg
 *
 * @name: pointer to the dawgs name
 * @age: pointer to the dawgs age
 * @owner: pointer to the dawgs owner
 *
 * Return: pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int count, nLen, oLen;
	dog_t *theDog;

	nLen = strLen(name);
	oLen = strLen(owner);
	if (nLen > 0 && oLen > 0 && age != 0)
	{
		theDog = malloc(sizeof(dog_t));
		if (theDog)
		{
			theDog->name = malloc(nLen + 1);
			theDog->owner = malloc(oLen + 1);
			if (theDog->name && theDog->owner)
			{
				count = 0;
				while (count < nLen + 1)
				{
					theDog->name[count] = name[count];
					count++;
				}
				count = 0;
				while (count < oLen + 1)
				{
					theDog->owner[count] = owner[count];
					count++;
				}
				theDog->age = age;
				return (theDog);
			}
			else
			{
				free(theDog);
				return (NULL);
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
