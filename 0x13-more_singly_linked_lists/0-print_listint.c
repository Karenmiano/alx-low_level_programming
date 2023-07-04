#include "lists.h"
/**
 * print_listint - prints the content of each node in a singly
 * linked list
 * @h: holds address of head node
 * Return: number of nodes in singly linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
