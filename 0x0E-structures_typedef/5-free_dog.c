#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 * @d: The dog to free
 * This code conforms to the betty documentation style
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
