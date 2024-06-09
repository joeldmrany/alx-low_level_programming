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
