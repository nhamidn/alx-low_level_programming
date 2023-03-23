#include "3-calc.h"

/**
 * main - the main function of the program
 * @argc: number of argument
 * @argv: argumentsr
 * Return: 0 on success otherwise error
 */
int main(int argc, char *argv[])
{
	int v;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') &&  (argv[2][0] != '-')
				&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	v = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", v);
	return (0);
}
