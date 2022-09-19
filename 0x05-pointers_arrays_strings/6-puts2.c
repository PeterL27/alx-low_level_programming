#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: str paramater
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
