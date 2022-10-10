#include <stdlib>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len, inc;
	struct dog *n_dog = NULL;

	len = 0;
	while (name[len] != '\0')
		len++;

	inc = 0;
	while (owner[inc] != '\0')
		inc++;

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
	n_dog->owner = malloc(inc + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= inc; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
