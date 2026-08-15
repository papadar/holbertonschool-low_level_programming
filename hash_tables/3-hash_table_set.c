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
	/* got some details */
	/* generate the index */
	/* check if a node exists */
	/* cycle through the linked list if necessary to find the matching key or a NULL pointer */
	/* update a node or create a new node */
	/* if a new node was created - update the pointers */
	/* return the node index.. (value down the list not needed) */

	const unsigned char *ukey = (const unsigned char*)key;
	const char *check;
	unsigned long int size, index;
	hash_node_t *head;

	if (!ht)
		return (0);

	size = ht->size;
	index = key_index(ukey, size);
	if (!index)
		return (0);

	head = ht->array[index];
	if (!head)
	{
		hash_node_t *temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = value;
		temp->key = key;
		temp->next = NULL;
		ht->array[index] = &temp;
		return (1);
	}
	
	check = head->key;
	while (check != key && head->next != NULL)
	{
		head = head->next;
		check = head->key;
	}
	if (check == key)
	{
		head->value = value;
		return (1);
	}
	else if (head->next == NULL)
	{
		hash_node_t *temp = malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (0);
		temp->value = value;
		temp->key = key;
		temp->next = NULL;
		head->next = &temp;
		return (1);
	}
}
