#include "hash_tables.h"

/**
 * hash_table_print - hash table printing
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	int i = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			i = 1;
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
		if (x < ht->size - 1 && ht->array[x + 1] != NULL && i == 1)
			printf(", ");
	}
	printf("}\n");
}
