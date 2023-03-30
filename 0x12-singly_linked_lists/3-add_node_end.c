#include "lists.h"

/**
 * add_node_end - add new node at the end of list.
 * @head: first element of the list.
 * @str: string of the new node.
 * Return: the new list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;
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
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
