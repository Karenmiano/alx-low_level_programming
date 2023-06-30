#include "lists.h"
/**
 * add_node_end - adds a node at the end of a singly linked list
 * @head: pointer to pointer to head node
 * @str: string value to be stored in new node
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *trav;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;
	trav = *head;
	if (trav == NULL)
		*head = end;
	else
	{
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = end;
	}
	return (end);
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (i);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
