#include "main.h"

/**
 * create_array - create a array with dynamic size
 * @size: size of array to create
 * @c: letter to fill the array with
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = (char *) malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
