#include "main.h"

/**
 * reverse_array - reverse the elements of
 * an integers array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing (void function).
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
