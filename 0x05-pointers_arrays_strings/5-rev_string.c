#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: parameter s
 */

void rev_string(char *s)
{
	int i, j, c, temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	c = 0;
	j = i - 1;

	while (c < j)
	{
		temp = s[c];
		s[c] = s[j];
		s[j] = temp;
		c++;
		j--;
	}
}
