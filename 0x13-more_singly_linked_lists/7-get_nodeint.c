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
 * get_nodeint_at_index - function that returns the nth node of
 *	a listint_t linked list
 * @head: pointer to list
 * @index: index of the node
 * Return: index's node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int i;
	size_t count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node = head;
	count = listint_len(head);
	if (index > count)
		return (NULL);
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		new_node = new_node->next;
	}
	return (new_node);
}
