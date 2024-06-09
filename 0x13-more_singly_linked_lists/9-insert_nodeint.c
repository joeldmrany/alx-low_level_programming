#include "lists.h"

/**
 * listint_len - unction that returns the number of elements in
 *	a linked listint_t list
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer to list
 * @idx: index
 * @n: number to add
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	size_t count;

	count = listint_len(*head);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node = *head;
	if (idx > count)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		new_node = new_node->next;
	}
	new_node->next->n = n;
	new_node->next = new_node->next->next;
	return (new_node);
}

