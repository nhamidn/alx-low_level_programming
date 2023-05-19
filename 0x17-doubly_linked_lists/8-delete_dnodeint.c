#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: Pointer to the first node
 * @index: index of the node that should be deleted.
 * Return: 1 on success otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (tmp != NULL)
		{
			*head = tmp->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		else
			return (-1);
	}

	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
