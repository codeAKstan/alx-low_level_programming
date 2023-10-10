#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * struct dog: a struct of dog
 * @d: a pointer of type dog
 * @name: the dogs name
 * @age: dogs age
 * @owner: dog owner
 * Description: a function that initialize a variable struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
