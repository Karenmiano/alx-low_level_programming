#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - prints the elements of a hash table
 * @ht: address of the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *trav;
	int first_pair = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		trav = ht->array[index];
		while (trav != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", trav->key, trav->value);
			first_pair = 0;
			trav = trav->next;
		}
	}
	printf("}\n");
}
