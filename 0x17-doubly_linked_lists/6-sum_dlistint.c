#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: Pointer to the first node
 * Return: Sum of element's value
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *lst = head;
	int sum = 0;

	while (lst != NULL)
	{
		sum += lst->n;
		lst = lst->next;
	}
	return (sum);
}
