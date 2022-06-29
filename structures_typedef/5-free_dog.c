#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees up space
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
