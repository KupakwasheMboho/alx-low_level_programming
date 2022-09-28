#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime
 * @n: number
 *
 * Return: 1 if n ia prime, 0 if not
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns hte 1 if n is prime
 * @n: number
 * @start: number to start checkingfrom
 *
 * Return: 1 if n is a prime, 0 if not
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
