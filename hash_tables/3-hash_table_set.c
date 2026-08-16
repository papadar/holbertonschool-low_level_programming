#include "hash_tables.h"

/**
 * hash_table_set - create / update a node within a hash table
 * @ht: pointer to a hash table
 * @key: pointer to a string used as a key
 * @value: the data to add / update within the node
 * Return: 1 if success, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
	{
		/*printf("made a new head item\n");*/
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = NULL;
		ht->array[index] = temp;
		return (1);
	}
	if (strcmp(head->key, key) == 0)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}
	else
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = ht->array[index];
		ht->array[index] = temp;
		return (1);
	}
	return (0);
}
