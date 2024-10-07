#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key of the element. Cannot be an empty string.
 * @value: The value associated with the key. The value must be duplicated.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;
    char *dup_value;

    /* Check for invalid input */
    if (!ht || !key || *key == '\0' || !value)
        return (0);

    /* Calculate the index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists and update its value */
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);      /* Free the old value */
            dup_value = strdup(value); /* Duplicate the new value */
            if (!dup_value)
                return (0);
            current->value = dup_value;
            return (1);
        }
        current = current->next;
    }

    /* Create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key); /* Duplicate the key */
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    dup_value = strdup(value); /* Duplicate the value */
    if (!dup_value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }
    new_node->value = dup_value;

    /* Insert the node at the beginning of the linked list (handle collisions) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}