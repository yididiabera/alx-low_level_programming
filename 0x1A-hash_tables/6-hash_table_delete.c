#include "hash_tables.h"

/**
 * hash_table_delete - hash table deleting
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		hash_node_t *current = ht->array[j];

		while (current != NULL)
		{
			hash_node_t *temp = current->next;

			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
