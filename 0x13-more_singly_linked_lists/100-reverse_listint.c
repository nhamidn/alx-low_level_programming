#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: head node
 * Return: pointer to the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *next;

	if (!head || !*head)
		return (NULL);
	new = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = next;
	}
	*head = new;
	return (*head);
}
