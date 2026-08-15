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
	const unsigned char *ukey = (const unsigned char*)key;
	const char *check;
	unsigned long int index;
	hash_node_t *head;
	hash_node_t *temp;

	printf("starting\n");

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index(ukey, ht->size);
	head = ht->array[index];
	if (head == NULL)
	{
		printf("didnt find a head item\n");
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = NULL;
		ht->array[index] = temp;
		return (1);
	}
	
	printf("found an item, searching\n");

	check = head->key;
	while (check != key && head->next != NULL)
	{
		head = head->next;
		check = head->key;
	}
	if (check == key)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}
	else if (head->next == NULL)
	{
		temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = strdup(value);
		temp->key = strdup(key);
		temp->next = NULL;
		head->next = temp;
		return (1);
	}
	return (0);
}
