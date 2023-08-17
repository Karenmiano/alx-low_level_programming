#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at specified index
 * @head: address of head node
 * @index: index of node
 * Return: address of index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	trav = head;
	while (index)
	{
		if (trav == NULL)
			return (NULL);
		trav = trav->next;
		index--;
	}
	return (trav);
}
