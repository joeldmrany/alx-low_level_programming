#include "lists.h"
/**
 * counter - function to count number of nodes in list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t counter(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - function that deletes the node at
 *		index of a dlistint_t linked list
 * @head: pointer to list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count;
	unsigned int i;
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (-1);
	}
	count = counter(*head);
	if (index >= count || *head == NULL)
	{
		free(new_node);
		return (-1);
	}
	new_node = *head;
	if (index == 0)
	{
		*head = new_node->next;
		if (*head)
			(*head)->prev = NULL;
		free(new_node);
		return (1);
	}
	for (i = 0; i < index ; i++)
	{
		new_node = new_node->next;
	}
	temp = new_node->prev;
	temp->next = new_node->next;
	if (new_node->next)
		new_node->next->prev = temp;
	free(new_node);
	return (1);
}
