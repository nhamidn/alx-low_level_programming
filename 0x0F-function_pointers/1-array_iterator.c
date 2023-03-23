#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an carray
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing (void function)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
	}
}
