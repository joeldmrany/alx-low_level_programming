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
