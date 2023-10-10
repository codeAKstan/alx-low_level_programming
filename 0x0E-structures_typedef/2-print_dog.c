#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - entry point
 * @d: pointer of type dog
 * Description: a function that prints struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
