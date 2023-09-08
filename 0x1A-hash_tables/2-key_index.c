#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 *
 * @key: the key to be hashed
 * @size: size of the array
 *
 * Return: index where key/value should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}
