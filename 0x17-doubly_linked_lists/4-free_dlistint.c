#include "lists.h"

/**
 * free_dlistint - Free a linked list
 * @head: Pointer to the first node
 * Return: Nothing (void function)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
