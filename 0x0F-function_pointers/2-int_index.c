#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: array size
 * @cmp: pointer to function
 * Return: the index of the element on success
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
