#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of singly linked
 * list
 * @head: pointer to pointer to head node
 * @n: data to be stored in new node
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *front;

	front = malloc(sizeof(listint_t));
	if (front == NULL)
		return (NULL);
	front->n = n;
	front->next = *head;
	*head = front;
	return (front);
}
