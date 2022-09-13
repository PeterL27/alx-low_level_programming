#include "main.h"

/**
 * print_alphabet_x10 - function to print 10 times alphabet in lowecase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
