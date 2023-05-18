#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *lst = h;
	int node_count = 0;

	while (lst != NULL)
	{
		printf("%d\n", lst->n);
		lst = lst->next;
		node_count++;
	}
	return (node_count);
}
