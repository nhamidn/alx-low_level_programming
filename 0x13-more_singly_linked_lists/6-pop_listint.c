#include "lists.h"
/**
 * pop_listint - deleted head node
 * @head: head node
 * Return: value of the head node
 * else 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
