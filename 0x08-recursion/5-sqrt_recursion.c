#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to be used
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - returns square root of number
 * @n: test number
 * @i: squared number
 *
 * Return: square root of n
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
