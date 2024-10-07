#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size);
{
    hash_table_t *new_table;
    unsigned long int i;

    // allocate memory for the hash table
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return NULL;

    // allocate memory for the array of buckets
    new_table->array = malloc(size * sizeof(hash_node_t *));
    if (new_table->array == NULL)
    {
        free(new_table);
        return NULL;
    }

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    new_table->size = size;

    return new_table;
}