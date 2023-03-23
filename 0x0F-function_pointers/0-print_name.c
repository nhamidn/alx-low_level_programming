#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string representing the name
 * @f: pointer to function
 * Return: Nothing (void function)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f)(name);
	}
}
