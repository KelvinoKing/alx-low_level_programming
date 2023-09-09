#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key for for element
 * @value: data held by element in the table
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head, *node;

	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		head = ht->array[index];
		if (strcmp(key, head->key) == 0)
			head->value = strdup(value);
		else
		{
			node->next = head;
			ht->array[index] = node;
		}
	}
	return (1);
}
