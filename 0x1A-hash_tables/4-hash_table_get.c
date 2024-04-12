#include "hash_tables.h"

/**
 * hash_table_get - recover value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value related with key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
