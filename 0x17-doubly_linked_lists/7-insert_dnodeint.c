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
 * insert_dnodeint_at_index - function that inserts a new node
 *				at given position
 * @h: pointer to list;
 * @idx: index;
 * @n: number to be added
 * Return: new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count;
	dlistint_t *new_node, *t, *temp;
	unsigned int i, j;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	count = dlistint_len(*h);
	if (idx > count)
		return (NULL);
	t = *h;
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		t = t->next;
	}
	for (j = 0; j < (i + 1); j++)
	{
		temp = temp->next;
	}
	new_node->n = n;
	new_node->next = temp;
	temp->prev = new_node;
	t->next = new_node;
	new_node->prev = t;
	return (new_node);
}
