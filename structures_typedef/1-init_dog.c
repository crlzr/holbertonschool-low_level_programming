#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - function for struct dog
 * @d: dog
 * @name: name of owner
 * @age: age of dog
 * @owner: owner of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
