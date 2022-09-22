#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = x;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
