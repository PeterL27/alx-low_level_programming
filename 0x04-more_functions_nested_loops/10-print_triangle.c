#include <stdio>
#include "main.h"

/**
 * print_triangle - prints triangle, followed by a new line
 * @size: size of the triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= 1; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
