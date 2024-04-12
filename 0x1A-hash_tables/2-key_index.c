#include "hash_tables.h"

/**
 * key_index - key index
 * @key: key
 * @size: hash table arr size
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key);

	return (i % size);
}
