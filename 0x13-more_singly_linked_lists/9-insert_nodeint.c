#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at specified index
 * @idx: index of new node
 * @n: integer to be stored at node
 * @head: pointer to pointer to head node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *trav;
	unsigned int find = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		new->next = *head;
		*head = new;
		return (new);
	}
	trav = *head;
	if (trav == NULL)
		return (NULL);
	while (trav != NULL)
	{
		if (find == idx - 1)
		{
			new->next = trav->next;
			trav->next = new;
			return (new);
		}
		trav = trav->next;
		find++;
	}
	return (NULL);
}
