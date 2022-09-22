#include "main.h"

/**
 * leet - a leet function
 * @x: parameter x
 *
 * Return: a string
 */

char *leet(char *x)
{
	int a = 0, b, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == r[b] || x[a] - 32 == r[b])
			{
				x[a] = n[b];
			}

			b++;
		}

		a++;

	}

	return (x);
}

