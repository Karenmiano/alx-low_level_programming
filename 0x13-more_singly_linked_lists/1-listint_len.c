#include "lists.h"
/**
 * listint_len - gets the number of nodes in a singly linked
 * list
 * @h: holds the address of head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
