#include "lists.h"
/**
 * sum_dlistint - gets the sum of all data in doubly linked list
 * @head: pointer to head node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *trav;

	if (head == NULL)
		return (0);
	trav = head;
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
