#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: head node
 * @idx: position
 * @n: data value of the new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *next, *tmp;

	tmp = *head;
	if (!head || !*head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (tmp)
	{
		if (i == (idx - 1))
		{
			next = tmp->next;
			tmp->next = node;
			node->next = next;
			return (node);
		}
		else if (tmp->next == NULL && (i + 1) == idx)
		{
			node->next = NULL;
			tmp->next = node;
			return (node);
		}
		i++;
		tmp = tmp->next;
	}
	free(node);
	return (NULL);
}
