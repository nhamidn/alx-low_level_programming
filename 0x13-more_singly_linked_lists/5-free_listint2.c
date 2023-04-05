#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head node of the list
 * Return: Nothing (void function)
 */
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		while (*head)
		{
			listint_t *tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
