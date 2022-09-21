#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings but add inputted number in bytes
 * @dest: string to be appended
 * @src: string to be completed at end of dest
 * @n: integer paramater
 *
 * Return: returns to new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[desr_len++] = src[i];

	return (dest);
}
