#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: Pointer to the first node
 * @n: data of the new node
 * @idx: position of the new node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tmp->next;
	node->prev = tmp;
	tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
