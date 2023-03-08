#include "main.h"

/**
 * _pow_recursion - power function in recursion
 * @x: number
 * @y: number
 * Return: Interger representing the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
