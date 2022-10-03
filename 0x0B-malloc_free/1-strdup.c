#include "main.h"
#include <stdlib.h>

/**
 * _strdup - turns a pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: pointer to string to be duplicated
 *
 * Return: NULL if str is NULL
 * pointer to be duplicated on successs
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int inc, i;

	/* check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	inc = 0;

	while (str[inc] != '\0')
	{
		inc++;
	}

	nstr = malloc(sizeof(char) * (inc + 1));

	/* check if malloc was succesful */
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < inc; i++)
	{
		nstr[i] = str[i];
	}

	nstr[inc] = '\0';
	return (nstr);
}
