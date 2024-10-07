#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 * Return: The value associated with the key, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* Check for invalid input */
    if (!ht || !key || *key == '\0')
        return (NULL);

    /* Get the index in the hash table array for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Search through the linked list at the given index */
    node = ht->array[index];
    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value); /* Key found, return the associated value */
        node = node->next;
    }

    return (NULL); /* Key not found */
}