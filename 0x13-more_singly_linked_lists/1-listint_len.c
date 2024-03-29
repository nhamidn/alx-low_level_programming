#include "lists.h"

/**
 * listint_len - calculate number of elements in list.
 * @h: list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
