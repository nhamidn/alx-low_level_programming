#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: seperator between numbers
 * @n: numbers of integers passed as arguments
 * Return: Nothing (void function)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list myList;

	va_start(myList, n);

	while (i < n)
	{
		printf("%i", va_arg(myList, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(myList);
}
