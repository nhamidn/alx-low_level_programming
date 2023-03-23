#include "3-calc.h"

/**
 * main - the main function of the program
 * @argc: number of argument
 * @argv: argumentsr
 * Return: 0 on success otherwise error
 */

int main(int argc, char *argv[])
{
	int r;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}
