#include "lists.h"

/**
 * list_len - calculate the number of elements of a list.
 * @h: List.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
