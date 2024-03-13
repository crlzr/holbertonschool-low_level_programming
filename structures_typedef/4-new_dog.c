#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * *new_dog - function that creates a new dog
 * Return: NULL if function fails
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the name and owner of strings */

	new_dog->name = malloc(strlen(name) +1);
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owener strings */

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	/* Set the age */

	new_dog->age = age;

	return (new_dog);
}
