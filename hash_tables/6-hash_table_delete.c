#include "hash_tables.h"

/**
 * hash_table_delete - delete an entire hash table & free the memory
 * @ht: pointer to the table struct
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	hash_node_t *temp;

	i = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
