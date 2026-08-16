#include "hash_tables.h"

/**
 * hash_table_get - retreives the value matching the provided key
 * @ht: pointer to the array
 * @key: string
 * Return: pointer to the value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);
	while (strcmp(key, head->key) != 0)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head->value);
}
