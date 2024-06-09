#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to head of the node;
 * @str: pointer to string
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *po;
	char *str2;

	if (str == NULL)
		return (NULL);
	str2 = strdup(str);
	if (str2 == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		free(str2);
		return (NULL);
	}
	new_node->str = str2;
	new_node->len = strlen(str2);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		po = *head;
		while (po->next != NULL)
			po = po->next;
		po->next = new_node;
	}
	return (new_node);
}
