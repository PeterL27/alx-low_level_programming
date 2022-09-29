#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - indicates a prime number
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, n - 1));
}

/**
 * _prime - calculates if numb is prime
 * @n: number
 * @i: counter
 *
 * Return: 1 if n is prime number, 0 if not
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % 1 == 0 && i > 0)
		return (0);

	return (_prime(n, i - 1));
}
