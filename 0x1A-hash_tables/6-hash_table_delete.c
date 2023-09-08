#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: address of hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		free_linked_list(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_linked_list - frees the chained nodes in the table
 * @head: pointer to beginning of list
 * Return: nothing
 */
void free_linked_list(hash_node_t *head)
{
	hash_node_t *trav, *del;

	trav = head;
	while (trav != NULL)
	{
		free(trav->key);
		free(trav->value);
		del = trav;
		trav = trav->next;
		free(del);
	}
}
