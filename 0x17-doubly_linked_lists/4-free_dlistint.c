#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav = head;

	while (trav->next != NULL)
	{
		trav = trav->next;
		free(trav->prev);
	}
	free(trav);
}
