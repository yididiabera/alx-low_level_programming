#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			flag = 1;
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
		if (i < ht->size - 1 && ht->array[i + 1] != NULL && flag == 1)
			printf(", ");
	}
	printf("}\n");
}
