#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - prints the details of the dog and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL || d->age == 0
		|| d->owner == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Name: %s, Age: %f, Owner: %s \n", d->name, d->age, d->owner);
		}
	printf("\n");	
	}
}
