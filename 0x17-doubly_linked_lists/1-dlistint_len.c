#include "lists.h"

/**
 * dlistint_len - calculate the number of element in h.
 * @h: Pointer to the first element
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *lst = h;

	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
