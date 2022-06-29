#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *loki;

	loki = malloc(sizeof(dog_t));

	if (loki == NULL)
	{
		return (NULL);
	}
	else
	{
		loki->name = malloc(((strlen(name)) * sizeof(char)) + 1);

		if (loki->name == NULL)
		{
			free(loki);
			return (NULL);
		}
		loki->age = age;

		loki->owner = malloc((strlen(owner)) * sizeof(char) + 1);

		if (loki->owner == NULL)
		{
			free(loki->name);
			free(loki);
			return (NULL);
		}
		strcpy(loki->owner, owner);
		}
	return (loki);
}
