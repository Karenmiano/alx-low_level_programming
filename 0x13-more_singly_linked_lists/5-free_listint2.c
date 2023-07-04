#include "lists.h"
/**
 * free_listint2 - function that free a singly linked list and
 * sets pointer to head node to NULL
 * @head: pointer to pointer to head node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return;
	temp1 = *head;
	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	*head = NULL;
}
