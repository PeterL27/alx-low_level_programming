#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates neq dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, int len, lenO;

	struct dog *n_dog = NULL;

	len = 0;
	while (name[len] != '\0')
		len++;

	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lenO + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lenO; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}

