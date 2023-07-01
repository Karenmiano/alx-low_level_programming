#include "lists.h"
/**
 * free_list - frees memory of a singly linked list
 * @head: pointer to head node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p, *t;

	p = head;
	while (p != NULL)
	{
		t = p;
		p = t->next;
		free(t->str);
		free(t);
	}
}
