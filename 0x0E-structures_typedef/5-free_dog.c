#include "dog.h"

/**
 * free_dog - frees a dog struct
 * @d: dog's struct
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
