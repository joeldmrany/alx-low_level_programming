#include "lists.h"
/**
 * print_dlistint - function that prints all
 *	the elements of a dlistint_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
