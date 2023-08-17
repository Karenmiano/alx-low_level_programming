#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to pointer to head node
 * @n: integer to be stored in new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *trav;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	trav = *head;
	while (trav->next != NULL)
	{
		trav = trav->next;
	}
	trav->next = new_node;
	new_node->prev = trav;
	return (new_node);
}
