#include "lists.h"

/**
 * sum_listint - return sum of the values of list
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
