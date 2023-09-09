#include "hash_tables.h"

/**
 * hash_table_get - Retrives a value associated with a key
 *
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value or null if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];

	if (head != NULL)
	{
		if ((strcmp(head->key, key) == 0) && head->next == NULL)
			return (head->value);
		while (head)
		{
			if (strcmp(head->key, key) == 0)
				return (head->value);
			head = head->next;
		}
	}
	return (NULL);
}
