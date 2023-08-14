#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of the type struct dog
 * @d: The dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * This program conforms to the betty documentation style
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
