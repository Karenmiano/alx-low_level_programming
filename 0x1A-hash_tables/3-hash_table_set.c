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
	hash_node_t *new_node, *update;
	unsigned long int index;
	char *val;

	if (ht == NULL || key[0] == '\0' || key == NULL || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	update = ht->array[index];
	while (update != NULL)
	{
		if (strcmp(update->key, key) == 0)
		{
			free(update->value);
			update->value = val;
			return (1);
		}
		update = update->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
