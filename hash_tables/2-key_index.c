#include "hash_tables.h"

/**
 * key_index - get an index within the array size by hashing the key
 * @key: the string to hash
 * @size: size of the array
 * Return: the index within the array or NULL
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	while (index > size)
		index = (index % size);

	return (index);
}
