#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
