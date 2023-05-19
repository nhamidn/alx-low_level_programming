#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the first node
 * @index: index of the node
 * Return: The direction of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *lst = head;

	while (i < index && lst != NULL)
	{
		if (lst == NULL)
			return (NULL);
		lst = lst->next;
		i++;
	}
	return (lst);
}
