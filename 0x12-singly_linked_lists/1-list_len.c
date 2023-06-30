#include "lists.h"
/**
 * list_len - finds the number of nodes in a singly linked
 * list
 * @h: head node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	i = 1 + list_len(h->next);
	return (i);
}
