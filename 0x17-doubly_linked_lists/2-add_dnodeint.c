#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly
 * linked list
 * @head: pointer to pointer to head node
 * @n: integer to be stored in new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *trav;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	trav = *head;
	new_node->next = trav;
	trav->prev = new_node;
	*head = new_node;
	return (new_node);
}
