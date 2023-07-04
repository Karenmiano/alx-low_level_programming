#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to pointer to head node
 * Return: data that was at the head node
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *del;

	if (head == NULL || *head == NULL)
		return (0);
	del = *head;
	i = del->n;
	*head = del->next;
	free(del);
	return (i);
}
