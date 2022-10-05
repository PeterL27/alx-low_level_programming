#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * a NULL string is treated as an emoty string
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to newly allocated memory which
 * has s1, s2 and null byte
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int inc1, inc2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	inc1 = 0;
	while (s1[inc1] != '\0')
		inc1++;

	inc2 = 0;
	while (s2[inc2] != '\0')
		inc2++;

	size = inc1 + inc2;

	nstr = malloc((sizeof(char) * size) + 1);
	/* check if malloc was succesful */
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < inc1)
	{
		nstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
