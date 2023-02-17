#include <unistd.h>

/**
* main - print to stderr
* Return: 1 when succeed
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
