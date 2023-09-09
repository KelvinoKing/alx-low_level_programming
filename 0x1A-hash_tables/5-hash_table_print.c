#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i = 0;
	int beggin = 1;

	if (ht == NULL)
		return;
	printf("{");

	while (i < ht->size)
	{
		head = ht->array[i];

		while (head)
		{
			if (beggin == 1)
			{
				printf("'%s': '%s'", head->key, head->value);
				beggin = 0;
			}
			else
				printf(", '%s': '%s'", head->key, head->value);
			head = head->next;
		}
		i++;
	}

	printf("}\n");
}
