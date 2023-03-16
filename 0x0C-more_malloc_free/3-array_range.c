#include "main.h"

/**
 * array_range - create an array of integers
 * from min to max
 * @min: first value
 * @max: last value
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	len = (max - min) + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len && min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
