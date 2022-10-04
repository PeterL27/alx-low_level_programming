#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of size ac
 *
 * Return: NULL if ac == 0 or av == NULL, pointer to new string
 * NULL on fail
 */
char *argstostr(int ac, char **av)
{
	int i, a, b, size;
	char *arg;

	size = 0;
	b = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a])
		{
			size++;
			a++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a])
		{
			arg[b] = av[i][a];
			a++;
			b++;
		}
		arg[b] = '\n';
		b++;
		i++;
	}
	arg[b] = '\0';
	return (arg);
}
