#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: List.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *l = h;

	while (l)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);
		l = l->next;
		len++;
	}
	return (len);
}
