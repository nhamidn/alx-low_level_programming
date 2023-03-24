#include "variadic_functions.h"

/**
 * print_all - function that prints all args
 * @format: list of types of arguments
 * Return: Nothing (void function)
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, flag = 0;
	char *p;
	const char argtypes[] = "cifs";
	va_list myList;

	va_start(myList, format);
	while (format && format[i])
	{
		j = 0;
		while (argtypes[j])
		{
			if (format[i] == argtypes[j])
			{
				if (flag)
					printf(", ");
				flag = 1;
				break;
			}
			j++;
		}
		if (format[i] == 'c')
			printf("%c", va_arg(myList, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(myList, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(myList, double));
		else if (format[i] == 's')
		{
			p = va_arg(myList, char *);
			if (!p)
				printf("(nil)");
			else
				printf("%s", p);
		}
		i++;
	}
	printf("\n");
	va_end(myList);
}
