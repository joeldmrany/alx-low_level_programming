#include "lists.h"

#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 *	elements in a linked dlistint_t list
 * @h: pointer to list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
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
 * get_dnodeint_at_index - function that returns the nth node
 *		of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: the index of the node;
 * Return: new_node;
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;
	unsigned int i;

	count = dlistint_len(head);
	if (index > count)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
