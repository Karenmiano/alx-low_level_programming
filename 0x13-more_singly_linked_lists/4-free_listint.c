#include "lists.h"
/**
 * free_listint - free a singly linked list
 * @head: holds address of head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
