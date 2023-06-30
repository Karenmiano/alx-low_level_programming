#include "lists.h"
/**
 * print_list - prints the data stored in each node of a singly
 * linked list
 * @h: head node
 * Return: number of nodes of SLL
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);
	num = 1;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	num += print_list(h->next);
	return (num);
}
