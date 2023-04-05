#include "lists.h"

/**
 * get_nodeint_at_index - get a node using index
 * @head: head node
 * @index: index
 * Return: address of node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
