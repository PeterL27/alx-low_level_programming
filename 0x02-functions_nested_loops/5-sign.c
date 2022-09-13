#include "main.h"

/**
 * print_sign - prints sign based on condition
 * @n: agrument passed
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
