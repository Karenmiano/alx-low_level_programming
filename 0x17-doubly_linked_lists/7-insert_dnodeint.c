#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at specified index
 * @h: pointer to pointer to head node
 * @idx: index
 * @n: integer to be stored in new node
 * Return: address of new node if successful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *trav;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	trav = *h;
	while (idx != 1)
	{
		if (trav == NULL)
			return (NULL);
		trav = trav->next;
		idx--;
	}
	if (trav->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = trav->next;
	trav->next->prev = new_node;
	trav->next = new_node;
	new_node->prev = trav;
	return (new_node);
}
