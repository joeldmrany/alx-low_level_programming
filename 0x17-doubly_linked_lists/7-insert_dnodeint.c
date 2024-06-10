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
	dlistint_t *new_node, *t;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			new_node->next = NULL;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		free(new_node);
		return (NULL);
	}
	count = dlistint_len(*h);
	t = *h;
	if (idx > count || t == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = t;
		if (t != NULL)
			t->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && t != NULL; i++)
	{
		t = t->next;
	}
	new_node->next = t->next;
	if (t->next != NULL)
		t->next->prev = new_node;
	t->next = new_node;
	new_node->prev = t;
	return (new_node);
}
