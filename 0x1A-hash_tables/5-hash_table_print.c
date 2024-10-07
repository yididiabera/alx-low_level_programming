#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int first = 1;

    /* Check for invalid input */
    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            if (!first)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            first = 0;
            node = node->next;
        }
    }
    printf("}\n");
}