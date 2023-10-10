#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a struct of name dog
 * @name: name of the dog
 * @age: the dogs age
 * @owner: dog owner
 * Description: define a new type struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
