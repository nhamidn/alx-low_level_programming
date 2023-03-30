#include "lists.h"

/**
 * add_node - add new node to a list.
 * @head: first element of the list.
 * @str: string of the new node.
 * Return: the new list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *new_str;
	int len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(node);
		return (NULL);
	}
	len = 0;
	while (new_str[len])
		len++;
	node->str = new_str;
	node->len = len;
	node->next = *head;
	*head = node;
	return (node);
}
