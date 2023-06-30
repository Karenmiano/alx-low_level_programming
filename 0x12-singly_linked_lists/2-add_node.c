#include "lists.h"
/**
 * add_node - adds a node at the beginning
 * @head: pointer to pointer of head node
 * @str: string value to be stored in new node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *start;

	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);
	start->str = strdup(str);
	start->len = _strlen(str);
	start->next = (*head);
	(*head) = start;
	return (start);
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
