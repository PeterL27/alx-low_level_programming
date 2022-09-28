#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to be used
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

/**
 * _sqrt - returns square root of number
 * @n: test number
 * @x: squared number
 *
 * Return: square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);

	else if (n * n == x)
		return (n);

	return (_sqrt(n + 1, x));
}
