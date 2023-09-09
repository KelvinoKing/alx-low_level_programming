#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *temp;
	unsigned long int index;

	if (ht == NULL)
		return;
	index = 0;
	while (index < ht->size)
	{
		head = ht->array[index];

		while (head != NULL)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			if (temp != NULL)
				head = temp;
			else
				break;
		}

		index++;
	}
	free(ht->array);
	free(ht);
}
