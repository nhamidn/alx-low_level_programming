#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: the size of the array in the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}
