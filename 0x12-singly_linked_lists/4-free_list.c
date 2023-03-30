#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first element of the list.
 * Return: Nothing (void function).
 */
void free_list(list_t *head)
{
	list_t *prev;

	if (head != NULL)
	{
		while (head != NULL)
		{
			prev = head;
			head = head->next;
			free(prev->str);
			free(prev);
		}
	}
}
