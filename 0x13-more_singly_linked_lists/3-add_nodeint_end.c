#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a singly linked
 * list
 * @head: pointer to pointer to head node
 * @n: integer to be stored in new node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, trav;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
		*head = end;
	else
	{
		trav = *head;
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = end;
	}
	return (end);
}
