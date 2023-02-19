#include <stdio.h>
/**
* main - prints all possible different combinations
* of two digits
*
* Return: 0 on success
*/
int main(void)
{
	int i = 0;
	int j;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
