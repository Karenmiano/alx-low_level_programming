#include "lists.h"
/**
 * dlistint_len - gets the number of nodes in a doubly linked list
 * @h: pointer to head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
