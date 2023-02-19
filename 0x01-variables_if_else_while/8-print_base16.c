#include <stdio.h>
/**
* main - prints
*
* Return: 0 on success
*/
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
