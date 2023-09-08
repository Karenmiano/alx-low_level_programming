#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds a new key value pair to the hash table
 * @ht: address of hash table
 * @key: key
 * @value: value
 * Return: 1 if successfully added, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (ht->array == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
