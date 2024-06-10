#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at
 *	the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: number to be added
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *t;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	new_node->prev = t;
	t->next = new_node;
	return (new_node);
}
