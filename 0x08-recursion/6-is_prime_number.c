#include "main.h"

/**
 * prime_checker - check if number is prime
 * @n: number to check
 * @i: index to test with
 * Return: 0 or 1
 */
int prime_checker(int n, int i)
{
	if ((n % i) == 0 && n > i)
		return (0);
	if (n == i)
		return (1);
	return (prime_checker(n, i + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
