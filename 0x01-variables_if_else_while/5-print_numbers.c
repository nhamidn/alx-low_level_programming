#include <stdio.h>
/**
* main - prints number from 0 to 10
*
* Return: 0 on success
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);

}
