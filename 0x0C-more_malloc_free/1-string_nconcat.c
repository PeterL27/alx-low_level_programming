#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concatenate to s1
 *
 * Return: if functions fails return NULL
 * or a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int inc = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		inc++;

	concat = malloc(sizeof(char) * (inc + 1));

	if (concat == NULL)
		return (NULL);

	inc = 0;

	for (index = 0; s1[index]; index++)
		concat[inc++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[inc++] = s2[index];

	concat[inc] = '\0';

	return (concat);
}
