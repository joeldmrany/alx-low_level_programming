#include "lists.h"
/**
 * free_list - function to free list_t list
 * @head: pointer to head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *po;

	while (head != NULL)
	{
		po = head;
		head = head->next;
		free(po->str);
		free(po);
	}
}
