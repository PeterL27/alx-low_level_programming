#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings but add inputted number in bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer paramater to compare index to
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
