#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * at given index
 * @n: pointer to bit
 * @index: index of bit
 *
 * Return: 1 if it worked, -1 if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
