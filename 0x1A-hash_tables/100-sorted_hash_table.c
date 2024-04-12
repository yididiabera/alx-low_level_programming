#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create - hash table creation
 * @size: hash table arr size
 * Return: a ptr
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
		return (NULL);
	table->size = size;

	array_null_init(table);
	return (table);
}

/**
 * array_null_init - slot initialization
 * @table: hash table struct ptr
 */
void array_null_init(hash_table_t *table)
{
	unsigned long int a;

	for (a = 0; a < table->size; a++)
		table->array[a] = NULL;
}

/**
 * shash_table_delete - sorted hash table deletion
 * @ht: sorted hash table ptr
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}