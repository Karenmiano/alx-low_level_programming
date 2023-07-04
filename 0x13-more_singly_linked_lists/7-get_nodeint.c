#include "lists.h"
/**
 * get_nodeint_at_index - function that looks for node at the index
 * @head: pointer to head node
 * @index: index of node being searched
 * Return: address of found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int find = 0;

	while (head != NULL)
	{
		if (find == index)
			return (head);
		head = head->next;
		find++;
	}
	return (NULL);
}
