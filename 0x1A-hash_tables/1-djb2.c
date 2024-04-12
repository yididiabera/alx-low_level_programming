#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm implementation using hast table
 * @str: str key
 * Return: string hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
		hash = ((hash << 5) + hash) + x;
	return (hash);
}
