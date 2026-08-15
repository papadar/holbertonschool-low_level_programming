#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the table array
 * Return: pointer to the table struct
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count = 0;
	hash_table_t *hashes = malloc(sizeof(hash_table_t));

	if (hashes == NULL)
		return (NULL);

	hashes->array = malloc(size * sizeof(*hashes->array));
	if (hashes->array == NULL)
	{
		free(hashes);
		return (NULL);
	}

	hashes->size = size;
	while (count < size)
	{
		hashes->array[count] = NULL;
		count++;
	}

	return (hashes);
}
