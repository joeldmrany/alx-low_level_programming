#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n)
 * @head: pointer to list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	new_node = *head;
	data = new_node->n;
	*head = (*head)->next;
	free(new_node);
	return (data);
}

