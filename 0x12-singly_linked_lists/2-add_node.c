#include "lists.h"
/**
 * add_node - function to add a new node at the beginning of a list
 * @head: pointer to head of the list
 * @str: pointer to string
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str2;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	str2 = strdup(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = str2;
	new_node->len = strlen(str2);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

