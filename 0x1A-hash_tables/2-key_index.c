#include "hash_tables.h"

/**
 * key_index - get the indez of a key
 * @key: string
 * @size: the size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
