#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 * Return: Nothing (void function)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *p;
	va_list myList;

	va_start(myList, n);

	while (i < n)
	{
		p = va_arg(myList, char*);

		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(myList);
}
