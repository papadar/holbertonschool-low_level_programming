#include "hash_tables.h"

/**
 * hash_table_print - print the contents of the hash table
 * @ht: pointer to the table
 * Return; void - just print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i, size;
	char join[2] = {'\0', '\0'};

	if (ht != NULL)
	{
		printf("{");
		size = ht->size;
		i = 0;
		while (i < size)
		{
			head = ht->array[i];
			if (head != NULL)
			{
				printf("%s'%s': '%s'", join, head->key, head->value);
				join[0] = ',';
				join[1] = ' ';
				while (head->next != NULL)
				{
					printf("%s'%s': '%s'", join, head->next->key, head->next->value);
					head = head->next;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
