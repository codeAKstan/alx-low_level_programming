#include "dog.h"
#include <stdlib.h>

/**
 * free_void - Entry point
 * @d: a pointer of type dog_t
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
