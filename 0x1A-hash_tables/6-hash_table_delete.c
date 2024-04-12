#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

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
