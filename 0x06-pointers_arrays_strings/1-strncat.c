#include "main.h"

/**
 * _strncat - concatenates two strings but add inputted number in bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer paramater to compare index to
 *
 * Return: returns to new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[desr_len++] = src[index];

	return (dest);
}
