#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: a dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
