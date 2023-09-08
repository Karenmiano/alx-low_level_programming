#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - fetches a value associated with the key
 * @ht: hash table to look in
 * @key: key to match value to
 * Return: the value, NULL if otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *trav;
	int index;

	if (ht == NULL || key[0] == '\0' || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	trav = ht->array[index];
	while (trav != NULL)
	{
		if (strcmp(trav->key, key) == 0)
			return (trav->value);
		trav = trav->next;
	}
	return (NULL);
}
