#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array
 * @array: the array to search in
 * @size: the size of the array
 * @value: value to search for
 *
 * Return: Index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (right + left) / 2;
		printf("Searching in array %zu: ", mid);
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (array[mid]);
	}
	return (-1);
}
