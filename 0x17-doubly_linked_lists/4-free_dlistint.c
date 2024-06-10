#include "lists.h"
/**
 * free_dlistint - function that frees the list;
 * @head: pointer to list;
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	t = head;
	while (t != NULL)
	{
		free(t);
		head = head->next;
		t = head;
	}
}
