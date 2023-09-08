#include "hash_tables.h"
/**
 * key_index - generates an index for a key after passing through djb2
 * @key: key for values
 * @size: size of the hash table
 * Return: index where we can store or retrieve values
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
