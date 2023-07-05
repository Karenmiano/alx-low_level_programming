#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to pointer to head node
 * @index: index of node to be deleted
 * Return: 1 if a node gets deleted -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int find = 0;
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	temp1 = *head;
	while (temp1->next != NULL)
	{
		if (find == index - 1)
		{
			temp2 = temp1->next;
			temp1->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp1 = temp1->next;
		find++;
	}
	return (-1);
}
