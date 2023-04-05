#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head node of the list
 * Return: Nothing (void function)
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
