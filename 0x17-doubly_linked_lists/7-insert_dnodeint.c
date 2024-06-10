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
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	count = dlistint_len(*h);
	if (idx > count)
	{
		free(new_node);
		return (NULL);
	}
	t = *h;
	temp = *h;
	for (i = 0; i < idx - 1 && t != NULL; i++)
	{
		t = t->next;
	}
	if (t == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = t->next;
	new_node->n = n;
	new_node->next = temp;
	if (temp != NULL)
	{
		temp->prev = new_node;
	}
	t->next = new_node;
	new_node->prev = t;
	return (new_node);
}
