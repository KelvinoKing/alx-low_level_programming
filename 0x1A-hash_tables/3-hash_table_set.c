#include "hash_tables.h"

/**
 * create_item - Creates a new item for hash table
 *
 * @key: key for the value
 * @value: data stored in item
 *
 * Return: pointer to new item
 */
hash_node_t *create_item(const char *key, char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * handle_collision - Handles collision using chaining
 *
 * @t: pointer to hash table
 * @index: position where collision occured in hash table
 * @n: item to be chained
 */
void handle_collision(hash_table_t *t, unsigned long int index, hash_node_t *n)
{
	hash_node_t *head;

	head = t->array[index];
	t->array[index] = n;
	n->next = head;
}

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
	char *dup_value;
	const unsigned char *dup_key;
	char *duplicatedKey;
	hash_node_t *item, *current_item;
	unsigned long int index;

	dup_value = strdup(value);
	duplicatedKey = strdup(key);
	dup_key = (const unsigned char *)duplicatedKey;
	item = create_item(key, dup_value);
	if (item == NULL)
		return (0);
	index = key_index(dup_key, ht->size);

	current_item = ht->array[index];

	if (current_item == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, dup_value);
			return (1);
		}
		else
		{
			handle_collision(ht, index, item);
			return (1);
		}
	}
	return (0);
}
