#include "main.h"

/**
 * _islower - check if charcter is lowercase
 * @c: a charactar argument
 *
 * Return: returns 1 or 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
