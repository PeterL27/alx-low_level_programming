#include "main.h"

/**
 * _isdigit - checks if the num is between 0 and 9
 * @c: input numb
 * Return: 1 if c is num, 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
