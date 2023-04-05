#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head node
 * @index: index
 * Return: 1 on success -1 when it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *node, *tmp;
	unsigned int i = 0;

	tmp = *head;
	if (!*head)
		return (-1);

	while (tmp)
	{
		if ((index - 1) == i)
		{
			prev = tmp;
			break;
		}
		i++;
		tmp = tmp->next;
	}
	if (!tmp && index != 0)
		return (-1);
	if (index != 0)
		node = prev->next;
	else
		node = *head;
	if (!node)
		return (-1);
	if (index != 0)
		prev->next = node->next;
	else
		*head = node->next;
	free(node);
	return (1);
}
