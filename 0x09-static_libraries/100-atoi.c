#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to convert
 *
 * Return: a integer
 */

int _atoi(char *s)
{
	int j = 0;
	unsigned int i = 0;
	int min = 1;
	int inc = 0;

	while (s[j])
	{
		if (s[j] == 45)
		{
			min *= -1;
		}

		while (s[j] >= 48 && s[j] <= 57)
		{
			inc = 1;
			i = (i * 10) + (s[j] - '0');
			j++;
		}

		if (inc == 1)
		{
			break;
		}

		j++;
	}

	i *= min;

	return (i);
}



