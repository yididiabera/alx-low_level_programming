#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node, *temp;

    /* Check if the hash table is NULL */
    if (!ht)
        return;

    /* Loop through each index of the hash table array */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];

        /* Free the linked list at each index */
        while (node)
        {
            temp = node->next; /* Save the next node */
            free(node->key);   /* Free the key */
            free(node->value); /* Free the value */
            free(node);        /* Free the node itself */
            node = temp;       /* Move to the next node */
        }
    }

    /* Free the array and the hash table structure itself */
    free(ht->array);
    free(ht);
}